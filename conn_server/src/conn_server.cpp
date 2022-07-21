#include "stdafx.h"

#include "app/server_app.h"
#include "conn/conn_module.h"
#include "config/server_config.h"

extern int tolua_server_config_open(lua_State* tolua_S);

int main(int argc, char* argv[])
{ 
    int32_t nRetCode = 0;
    CMGApp* pServer = &CMGApp::instance();

    MG_CONFIG config;
	config.m_pConfigData = &g_ServerConfig;
	config.m_pcszConfigClassName = "SERVER_CONFIG";
	config.vToluaFunc.push_back(tolua_server_config_open);
    pServer->set_config(config);

    nRetCode = pServer->init("conn_server", argc, argv);
    LOG_PROCESS_ERROR(nRetCode);

    pServer->run_mainloop();

    pServer->fini();

Exit0:
	return 0;
}
