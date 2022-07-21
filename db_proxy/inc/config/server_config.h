#ifndef _SERVER_CONFIG_H_
#define _SERVER_CONFIG_H_

// tolua_begin

struct SERVER_CONFIG
{
	int32_t nSyncConnectTimeout;
	int32_t nSyncDisConnectTimeout;
	int32_t nDBReqExpireTime;
	int32_t nDBPingInterval;
	int32_t nDBPingTimeout;
	int32_t nDBReConnectInterval;
};

extern SERVER_CONFIG g_ServerConfig;

// tolua_end

#endif	// _GLOBAL_CONFIG_H_
