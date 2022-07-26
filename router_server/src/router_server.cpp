#include "stdafx.h"
#include "app/server_app.h"
#include "define/server_def.h"

#include "service_def.h"

#include "message/rs_message_handler.h"
#include "alive_mgr/alive_mgr.h"
#include "router_mgr/router_mgr.h"
#include "object_mgr/rs_object_mgr.h"
#include "hash/hash.h"

#include "config/server_config.h"
#include "time/time_mgr.h"

extern int tolua_server_config_open(lua_State* tolua_S);

BOOL server_init(TAPPCTX* pCtx, BOOL bResume)
{
	int32_t nRetCode = 0;

    nRetCode = CRSMessageHandler::instance().init(pCtx->iBus, pCtx->iId, bResume);
    LOG_PROCESS_ERROR(nRetCode);

	nRetCode = CAliveMgr::get_instance().init(bResume);
	LOG_PROCESS_ERROR(nRetCode);

	nRetCode = CRouterMgr::get_instance().init(bResume);
	LOG_PROCESS_ERROR(nRetCode);

	nRetCode = CRsObjMgr::get_instance().init(bResume);
	LOG_PROCESS_ERROR(nRetCode);

	nRetCode = router_hash_init();
	LOG_PROCESS_ERROR(nRetCode);

	if (!bResume)
	{
		CMGApp::instance().set_state(svstInit);
	}
	else
	{
		CMGApp::instance().set_state(svstInService);
	}
	
	INF("server is init");

	return TRUE;
Exit0:
	return FALSE;
}

BOOL server_fini(TAPPCTX* pCtx, BOOL bResume)
{
	int32_t nRetCode = 0;

	INF("server is fini");
    
	CRSMessageHandler::instance().uninit();
    CRouterMgr::get_instance().uninit();
    CAliveMgr::get_instance().uninit();
    CRsObjMgr::get_instance().uninit();
    router_hash_uninit();

	return TRUE;
Exit0:
	return FALSE;
}

BOOL server_frame(void)
{
    CRSMessageHandler::instance().mainloop();
	CAliveMgr::get_instance().mainloop();

	return TRUE;
}

BOOL server_reload(TAPPCTX* pCtx, BOOL bResume)
{
	return TRUE;
}

BOOL server_stop(TAPPCTX* pCtx, BOOL bResume)
{
	int32_t nRetCode = 0;
	uint64_t qwCurrTick = CTimeMgr::instance().get_server_tick();
    int32_t nStopTimer = CMGApp::instance().get_stop_timer();
        
	if (nStopTimer == 0)
    {
		// delay for server unregister
		CMGApp::instance().set_stop_timer(qwCurrTick + g_ServerConfig.nServerEndWaitTimeout);
	}
	else if (qwCurrTick > nStopTimer)
	{
		INF("begin to finish stop");
		return TRUE;
	}

Exit0:
	return FALSE;
}

int main(int argc, char* argv[])
{
    int32_t nRetCode = 0;
    CMGApp* pServer = &CMGApp::instance();

    MG_CONFIG config;
    config.pAppInit = server_init;
    config.pAppFini = server_fini;
    config.pAppFrame = server_frame;
    config.pAppReload = server_reload;
    config.pAppStop = server_stop;

	config.m_pConfigData = &g_ServerConfig;
	config.m_pcszConfigClassName = "SERVER_CONFIG";
	config.vToluaFunc.push_back(tolua_server_config_open);
    pServer->set_config(config);
    pServer->set_user_msg_handler(ALL_SERVER_TYPE, CRSMessageHandler::msg_handler);

    nRetCode = pServer->init("router_server", argc, argv);
    LOG_PROCESS_ERROR(nRetCode);

    pServer->run_mainloop();

    pServer->fini();

Exit0:
    return 0;
}