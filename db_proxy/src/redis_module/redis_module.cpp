#include "stdafx.h"
#include "redis_module.h"

#include "redis_mgr.h"
#include "app/server_app.h"
#include "config/server_config.h"

struct TEST_USER_DATA
{
    int32_t nTestValue;
    char    szString[20];
};

void test_callback(redisReply* pReply, const char* pUserData, size_t nDataSize)
{
    int32_t nRetCode = 0;
    TEST_USER_DATA* pData = NULL;

    LOG_PROCESS_ERROR(pReply);
    LOG_PROCESS_ERROR(pUserData);

    pData = (TEST_USER_DATA*)pUserData;

    INF("user data value %d str %s, reply %d interger %d str %s", pData->nTestValue, pData->szString, pReply->type, pReply->integer, pReply->str);

Exit0:
    return;
}

void test_eval_callback(struct redisAsyncContext* pCtx, redisReply* pReply, const char* pUserData, size_t nDataSize)
{
    int32_t nRetCode = 0;
    TEST_USER_DATA* pData = NULL;

    LOG_PROCESS_ERROR(pCtx);
    LOG_PROCESS_ERROR(pReply);
    LOG_PROCESS_ERROR(pUserData);

    pData = (TEST_USER_DATA*)pUserData;

    INF("user data value %d str %s, reply %d interger %d str %s", pData->nTestValue, pData->szString, pReply->type, pReply->integer, pReply->str);

    for (int32_t i = 0; i < pReply->elements; i++)
    {
        redisReply* pCurrReply = pReply->element[i];

        INF("reply str %s", pCurrReply->str);
    }

Exit0:
    return;
}

MG_REGISTER_MODULE(CRedisModule);

BOOL CRedisModule::init(BOOL bResume)
{
    int32_t nRetCode = 0;
    pRedisCli = NULL;
    TEST_USER_DATA UserData;

    nRetCode = CRedisCliMgr::instance().init(bResume);
    LOG_PROCESS_ERROR(nRetCode);
    
    pRedisCli = CRedisCliMgr::instance().new_client("default", g_ServerConfig.szRedisHost, g_ServerConfig.nRedisPort, g_ServerConfig.szRedisPassword);
    LOG_PROCESS_ERROR(pRedisCli);
    
    nRetCode = pRedisCli->sync_connect();
    LOG_PROCESS_ERROR(nRetCode);
    
	//pRedisCli->reg_handler(1, test_callback);

    //UserData.nTestValue = 100;
    //strxcpy(UserData.szString, "hello world", sizeof(UserData.szString));
    //nRetCode = pTestRedisCli->command(1, (const char*)&UserData, sizeof(UserData), "set %s %d", "test_key", 10);
    //LOG_PROCESS_ERROR(nRetCode);

    //nRetCode = pTestRedisCli->eval(0, 1, (const char*)&UserData, sizeof(UserData), "1 %d %d %d", "return {KEYS[1], ARGV[1], ARGV[2]}", 10, 1, 2);
    //LOG_PROCESS_ERROR(nRetCode);

    nRetCode = _init_msg_handler();
    LOG_PROCESS_ERROR(nRetCode);

    return TRUE;
Exit0:
    return FALSE;
}

BOOL CRedisModule::uninit(void)
{
    int32_t nRetCode = 0;

    nRetCode = pRedisCli->sync_disconnect();
    LOG_CHECK_ERROR(nRetCode);

    nRetCode = CRedisCliMgr::instance().del_client(pRedisCli);
    LOG_CHECK_ERROR(nRetCode);

    return TRUE;
Exit0:
    return FALSE;
}

void CRedisModule::on_proc()
{
    CRedisCliMgr::instance().on_proc();
}

void CRedisModule::on_frame()
{
    CRedisCliMgr::instance().on_frame();
}
