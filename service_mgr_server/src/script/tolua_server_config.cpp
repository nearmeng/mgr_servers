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

/* get function: nInitObjMgrCount of class  SERVER_CONFIG */
#ifndef TOLUA_DISABLE_tolua_get_SERVER_CONFIG_nInitObjMgrCount
static int tolua_get_SERVER_CONFIG_nInitObjMgrCount(lua_State* tolua_S)
{
  SERVER_CONFIG* self = (SERVER_CONFIG*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'nInitObjMgrCount'",NULL);
#endif
 tolua_pushinteger(tolua_S,(lua_Integer)self->nInitObjMgrCount);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: nInitObjMgrCount of class  SERVER_CONFIG */
#ifndef TOLUA_DISABLE_tolua_set_SERVER_CONFIG_nInitObjMgrCount
static int tolua_set_SERVER_CONFIG_nInitObjMgrCount(lua_State* tolua_S)
{
  SERVER_CONFIG* self = (SERVER_CONFIG*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'nInitObjMgrCount'",NULL);
 if (!tolua_isinteger(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->nInitObjMgrCount = ((int32_t)  tolua_tointeger(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: nHeartBeatTimeOut of class  SERVER_CONFIG */
#ifndef TOLUA_DISABLE_tolua_get_SERVER_CONFIG_nHeartBeatTimeOut
static int tolua_get_SERVER_CONFIG_nHeartBeatTimeOut(lua_State* tolua_S)
{
  SERVER_CONFIG* self = (SERVER_CONFIG*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'nHeartBeatTimeOut'",NULL);
#endif
 tolua_pushinteger(tolua_S,(lua_Integer)self->nHeartBeatTimeOut);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: nHeartBeatTimeOut of class  SERVER_CONFIG */
#ifndef TOLUA_DISABLE_tolua_set_SERVER_CONFIG_nHeartBeatTimeOut
static int tolua_set_SERVER_CONFIG_nHeartBeatTimeOut(lua_State* tolua_S)
{
  SERVER_CONFIG* self = (SERVER_CONFIG*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'nHeartBeatTimeOut'",NULL);
 if (!tolua_isinteger(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->nHeartBeatTimeOut = ((int32_t)  tolua_tointeger(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: nServerEndWaitTimeout of class  SERVER_CONFIG */
#ifndef TOLUA_DISABLE_tolua_get_SERVER_CONFIG_nServerEndWaitTimeout
static int tolua_get_SERVER_CONFIG_nServerEndWaitTimeout(lua_State* tolua_S)
{
  SERVER_CONFIG* self = (SERVER_CONFIG*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'nServerEndWaitTimeout'",NULL);
#endif
 tolua_pushinteger(tolua_S,(lua_Integer)self->nServerEndWaitTimeout);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: nServerEndWaitTimeout of class  SERVER_CONFIG */
#ifndef TOLUA_DISABLE_tolua_set_SERVER_CONFIG_nServerEndWaitTimeout
static int tolua_set_SERVER_CONFIG_nServerEndWaitTimeout(lua_State* tolua_S)
{
  SERVER_CONFIG* self = (SERVER_CONFIG*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'nServerEndWaitTimeout'",NULL);
 if (!tolua_isinteger(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->nServerEndWaitTimeout = ((int32_t)  tolua_tointeger(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: nRouterDownReportTimeInterval of class  SERVER_CONFIG */
#ifndef TOLUA_DISABLE_tolua_get_SERVER_CONFIG_nRouterDownReportTimeInterval
static int tolua_get_SERVER_CONFIG_nRouterDownReportTimeInterval(lua_State* tolua_S)
{
  SERVER_CONFIG* self = (SERVER_CONFIG*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'nRouterDownReportTimeInterval'",NULL);
#endif
 tolua_pushinteger(tolua_S,(lua_Integer)self->nRouterDownReportTimeInterval);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: nRouterDownReportTimeInterval of class  SERVER_CONFIG */
#ifndef TOLUA_DISABLE_tolua_set_SERVER_CONFIG_nRouterDownReportTimeInterval
static int tolua_set_SERVER_CONFIG_nRouterDownReportTimeInterval(lua_State* tolua_S)
{
  SERVER_CONFIG* self = (SERVER_CONFIG*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'nRouterDownReportTimeInterval'",NULL);
 if (!tolua_isinteger(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->nRouterDownReportTimeInterval = ((int32_t)  tolua_tointeger(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: nRouterServerType of class  SERVER_CONFIG */
#ifndef TOLUA_DISABLE_tolua_get_SERVER_CONFIG_nRouterServerType
static int tolua_get_SERVER_CONFIG_nRouterServerType(lua_State* tolua_S)
{
  SERVER_CONFIG* self = (SERVER_CONFIG*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'nRouterServerType'",NULL);
#endif
 tolua_pushinteger(tolua_S,(lua_Integer)self->nRouterServerType);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: nRouterServerType of class  SERVER_CONFIG */
#ifndef TOLUA_DISABLE_tolua_set_SERVER_CONFIG_nRouterServerType
static int tolua_set_SERVER_CONFIG_nRouterServerType(lua_State* tolua_S)
{
  SERVER_CONFIG* self = (SERVER_CONFIG*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'nRouterServerType'",NULL);
 if (!tolua_isinteger(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->nRouterServerType = ((int32_t)  tolua_tointeger(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: nServiceMgrServerType of class  SERVER_CONFIG */
#ifndef TOLUA_DISABLE_tolua_get_SERVER_CONFIG_nServiceMgrServerType
static int tolua_get_SERVER_CONFIG_nServiceMgrServerType(lua_State* tolua_S)
{
  SERVER_CONFIG* self = (SERVER_CONFIG*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'nServiceMgrServerType'",NULL);
#endif
 tolua_pushinteger(tolua_S,(lua_Integer)self->nServiceMgrServerType);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: nServiceMgrServerType of class  SERVER_CONFIG */
#ifndef TOLUA_DISABLE_tolua_set_SERVER_CONFIG_nServiceMgrServerType
static int tolua_set_SERVER_CONFIG_nServiceMgrServerType(lua_State* tolua_S)
{
  SERVER_CONFIG* self = (SERVER_CONFIG*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'nServiceMgrServerType'",NULL);
 if (!tolua_isinteger(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->nServiceMgrServerType = ((int32_t)  tolua_tointeger(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: nGameServerType of class  SERVER_CONFIG */
#ifndef TOLUA_DISABLE_tolua_get_SERVER_CONFIG_nGameServerType
static int tolua_get_SERVER_CONFIG_nGameServerType(lua_State* tolua_S)
{
  SERVER_CONFIG* self = (SERVER_CONFIG*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'nGameServerType'",NULL);
#endif
 tolua_pushinteger(tolua_S,(lua_Integer)self->nGameServerType);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: nGameServerType of class  SERVER_CONFIG */
#ifndef TOLUA_DISABLE_tolua_set_SERVER_CONFIG_nGameServerType
static int tolua_set_SERVER_CONFIG_nGameServerType(lua_State* tolua_S)
{
  SERVER_CONFIG* self = (SERVER_CONFIG*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'nGameServerType'",NULL);
 if (!tolua_isinteger(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->nGameServerType = ((int32_t)  tolua_tointeger(tolua_S,2,0))
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
  tolua_variable(tolua_S,"nInitObjMgrCount",tolua_get_SERVER_CONFIG_nInitObjMgrCount,tolua_set_SERVER_CONFIG_nInitObjMgrCount);
  tolua_variable(tolua_S,"nHeartBeatTimeOut",tolua_get_SERVER_CONFIG_nHeartBeatTimeOut,tolua_set_SERVER_CONFIG_nHeartBeatTimeOut);
  tolua_variable(tolua_S,"nServerEndWaitTimeout",tolua_get_SERVER_CONFIG_nServerEndWaitTimeout,tolua_set_SERVER_CONFIG_nServerEndWaitTimeout);
  tolua_variable(tolua_S,"nRouterDownReportTimeInterval",tolua_get_SERVER_CONFIG_nRouterDownReportTimeInterval,tolua_set_SERVER_CONFIG_nRouterDownReportTimeInterval);
  tolua_variable(tolua_S,"nRouterServerType",tolua_get_SERVER_CONFIG_nRouterServerType,tolua_set_SERVER_CONFIG_nRouterServerType);
  tolua_variable(tolua_S,"nServiceMgrServerType",tolua_get_SERVER_CONFIG_nServiceMgrServerType,tolua_set_SERVER_CONFIG_nServiceMgrServerType);
  tolua_variable(tolua_S,"nGameServerType",tolua_get_SERVER_CONFIG_nGameServerType,tolua_set_SERVER_CONFIG_nGameServerType);
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

