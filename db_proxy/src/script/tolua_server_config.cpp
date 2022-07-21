/*
** Lua binding: server_config
** Generated automatically by toluapp-1.0.94 on Thu Jul 21 16:03:09 2022.
*/

#include "stdafx.h"
#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "toluapp.h"

/* Exported function */
TOLUA_API int tolua_server_config_open (lua_State* tolua_S);

#include "../../inc/config/server_config.h"

/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"SERVER_CONFIG");
}

/* get function: nSyncConnectTimeout of class  SERVER_CONFIG */
#ifndef TOLUA_DISABLE_tolua_get_SERVER_CONFIG_nSyncConnectTimeout
static int tolua_get_SERVER_CONFIG_nSyncConnectTimeout(lua_State* tolua_S)
{
  SERVER_CONFIG* self = (SERVER_CONFIG*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'nSyncConnectTimeout'",NULL);
#endif
 tolua_pushinteger(tolua_S,(lua_Integer)self->nSyncConnectTimeout);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: nSyncConnectTimeout of class  SERVER_CONFIG */
#ifndef TOLUA_DISABLE_tolua_set_SERVER_CONFIG_nSyncConnectTimeout
static int tolua_set_SERVER_CONFIG_nSyncConnectTimeout(lua_State* tolua_S)
{
  SERVER_CONFIG* self = (SERVER_CONFIG*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'nSyncConnectTimeout'",NULL);
 if (!tolua_isinteger(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->nSyncConnectTimeout = ((int32_t)  tolua_tointeger(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: nSyncDisConnectTimeout of class  SERVER_CONFIG */
#ifndef TOLUA_DISABLE_tolua_get_SERVER_CONFIG_nSyncDisConnectTimeout
static int tolua_get_SERVER_CONFIG_nSyncDisConnectTimeout(lua_State* tolua_S)
{
  SERVER_CONFIG* self = (SERVER_CONFIG*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'nSyncDisConnectTimeout'",NULL);
#endif
 tolua_pushinteger(tolua_S,(lua_Integer)self->nSyncDisConnectTimeout);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: nSyncDisConnectTimeout of class  SERVER_CONFIG */
#ifndef TOLUA_DISABLE_tolua_set_SERVER_CONFIG_nSyncDisConnectTimeout
static int tolua_set_SERVER_CONFIG_nSyncDisConnectTimeout(lua_State* tolua_S)
{
  SERVER_CONFIG* self = (SERVER_CONFIG*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'nSyncDisConnectTimeout'",NULL);
 if (!tolua_isinteger(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->nSyncDisConnectTimeout = ((int32_t)  tolua_tointeger(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: nDBReqExpireTime of class  SERVER_CONFIG */
#ifndef TOLUA_DISABLE_tolua_get_SERVER_CONFIG_nDBReqExpireTime
static int tolua_get_SERVER_CONFIG_nDBReqExpireTime(lua_State* tolua_S)
{
  SERVER_CONFIG* self = (SERVER_CONFIG*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'nDBReqExpireTime'",NULL);
#endif
 tolua_pushinteger(tolua_S,(lua_Integer)self->nDBReqExpireTime);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: nDBReqExpireTime of class  SERVER_CONFIG */
#ifndef TOLUA_DISABLE_tolua_set_SERVER_CONFIG_nDBReqExpireTime
static int tolua_set_SERVER_CONFIG_nDBReqExpireTime(lua_State* tolua_S)
{
  SERVER_CONFIG* self = (SERVER_CONFIG*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'nDBReqExpireTime'",NULL);
 if (!tolua_isinteger(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->nDBReqExpireTime = ((int32_t)  tolua_tointeger(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: nDBPingInterval of class  SERVER_CONFIG */
#ifndef TOLUA_DISABLE_tolua_get_SERVER_CONFIG_nDBPingInterval
static int tolua_get_SERVER_CONFIG_nDBPingInterval(lua_State* tolua_S)
{
  SERVER_CONFIG* self = (SERVER_CONFIG*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'nDBPingInterval'",NULL);
#endif
 tolua_pushinteger(tolua_S,(lua_Integer)self->nDBPingInterval);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: nDBPingInterval of class  SERVER_CONFIG */
#ifndef TOLUA_DISABLE_tolua_set_SERVER_CONFIG_nDBPingInterval
static int tolua_set_SERVER_CONFIG_nDBPingInterval(lua_State* tolua_S)
{
  SERVER_CONFIG* self = (SERVER_CONFIG*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'nDBPingInterval'",NULL);
 if (!tolua_isinteger(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->nDBPingInterval = ((int32_t)  tolua_tointeger(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: nDBPingTimeout of class  SERVER_CONFIG */
#ifndef TOLUA_DISABLE_tolua_get_SERVER_CONFIG_nDBPingTimeout
static int tolua_get_SERVER_CONFIG_nDBPingTimeout(lua_State* tolua_S)
{
  SERVER_CONFIG* self = (SERVER_CONFIG*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'nDBPingTimeout'",NULL);
#endif
 tolua_pushinteger(tolua_S,(lua_Integer)self->nDBPingTimeout);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: nDBPingTimeout of class  SERVER_CONFIG */
#ifndef TOLUA_DISABLE_tolua_set_SERVER_CONFIG_nDBPingTimeout
static int tolua_set_SERVER_CONFIG_nDBPingTimeout(lua_State* tolua_S)
{
  SERVER_CONFIG* self = (SERVER_CONFIG*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'nDBPingTimeout'",NULL);
 if (!tolua_isinteger(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->nDBPingTimeout = ((int32_t)  tolua_tointeger(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: nDBReConnectInterval of class  SERVER_CONFIG */
#ifndef TOLUA_DISABLE_tolua_get_SERVER_CONFIG_nDBReConnectInterval
static int tolua_get_SERVER_CONFIG_nDBReConnectInterval(lua_State* tolua_S)
{
  SERVER_CONFIG* self = (SERVER_CONFIG*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'nDBReConnectInterval'",NULL);
#endif
 tolua_pushinteger(tolua_S,(lua_Integer)self->nDBReConnectInterval);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: nDBReConnectInterval of class  SERVER_CONFIG */
#ifndef TOLUA_DISABLE_tolua_set_SERVER_CONFIG_nDBReConnectInterval
static int tolua_set_SERVER_CONFIG_nDBReConnectInterval(lua_State* tolua_S)
{
  SERVER_CONFIG* self = (SERVER_CONFIG*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'nDBReConnectInterval'",NULL);
 if (!tolua_isinteger(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->nDBReConnectInterval = ((int32_t)  tolua_tointeger(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: g_ServerConfig */
#ifndef TOLUA_DISABLE_tolua_get_g_ServerConfig
static int tolua_get_g_ServerConfig(lua_State* tolua_S)
{
  tolua_pushusertype(tolua_S,(void*)&g_ServerConfig,"SERVER_CONFIG");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: g_ServerConfig */
#ifndef TOLUA_DISABLE_tolua_set_g_ServerConfig
static int tolua_set_g_ServerConfig(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"SERVER_CONFIG",0,&tolua_err)))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  g_ServerConfig = *((SERVER_CONFIG*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_server_config_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,1);
 tolua_beginmodule(tolua_S,NULL);
 tolua_cclass(tolua_S,"SERVER_CONFIG","SERVER_CONFIG","",NULL);
 tolua_beginmodule(tolua_S,"SERVER_CONFIG");
  tolua_variable(tolua_S,"nSyncConnectTimeout",tolua_get_SERVER_CONFIG_nSyncConnectTimeout,tolua_set_SERVER_CONFIG_nSyncConnectTimeout);
  tolua_variable(tolua_S,"nSyncDisConnectTimeout",tolua_get_SERVER_CONFIG_nSyncDisConnectTimeout,tolua_set_SERVER_CONFIG_nSyncDisConnectTimeout);
  tolua_variable(tolua_S,"nDBReqExpireTime",tolua_get_SERVER_CONFIG_nDBReqExpireTime,tolua_set_SERVER_CONFIG_nDBReqExpireTime);
  tolua_variable(tolua_S,"nDBPingInterval",tolua_get_SERVER_CONFIG_nDBPingInterval,tolua_set_SERVER_CONFIG_nDBPingInterval);
  tolua_variable(tolua_S,"nDBPingTimeout",tolua_get_SERVER_CONFIG_nDBPingTimeout,tolua_set_SERVER_CONFIG_nDBPingTimeout);
  tolua_variable(tolua_S,"nDBReConnectInterval",tolua_get_SERVER_CONFIG_nDBReConnectInterval,tolua_set_SERVER_CONFIG_nDBReConnectInterval);
 tolua_endmodule(tolua_S);
 tolua_variable(tolua_S,"g_ServerConfig",tolua_get_g_ServerConfig,tolua_set_g_ServerConfig);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_server_config (lua_State* tolua_S) {
 return tolua_server_config_open(tolua_S);
};
#endif

