#ifndef _SERVER_CONFIG_H_
#define _SERVER_CONFIG_H_

// tolua_begin

struct SERVER_CONFIG
{
	int32_t nRouterServerType;
	int32_t nServiceMgrServerType;
	int32_t nAppServerBeginType;
	int32_t nAppServerEndType;
};

extern SERVER_CONFIG g_ServerConfig;

// tolua_end

#endif	// _GLOBAL_CONFIG_H_
