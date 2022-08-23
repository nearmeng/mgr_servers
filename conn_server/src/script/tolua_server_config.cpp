/*
** Lua binding: server_config
** Generated automatically by toluapp-1.0.94 on Tue Aug 23 14:11:59 2022.
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

/* get function: nInitSessionMgrCount of class  SERVER_CONFIG */
#ifndef TOLUA_DISABLE_tolua_get_SERVER_CONFIG_nInitSessionMgrCount
static int tolua_get_SERVER_CONFIG_nInitSessionMgrCount(lua_State* tolua_S)
{
  SERVER_CONFIG* self = (SERVER_CONFIG*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'nInitSessionMgrCount'",NULL);
#endif
 tolua_pushinteger(tolua_S,(lua_Integer)self->nInitSessionMgrCount);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: nInitSessionMgrCount of class  SERVER_CONFIG */
#ifndef TOLUA_DISABLE_tolua_set_SERVER_CONFIG_nInitSessionMgrCount
static int tolua_set_SERVER_CONFIG_nInitSessionMgrCount(lua_State* tolua_S)
{
  SERVER_CONFIG* self = (SERVER_CONFIG*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'nInitSessionMgrCount'",NULL);
 if (!tolua_isinteger(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->nInitSessionMgrCount = ((int32_t)  tolua_tointeger(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: nTconndServerType of class  SERVER_CONFIG */
#ifndef TOLUA_DISABLE_tolua_get_SERVER_CONFIG_nTconndServerType
static int tolua_get_SERVER_CONFIG_nTconndServerType(lua_State* tolua_S)
{
  SERVER_CONFIG* self = (SERVER_CONFIG*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'nTconndServerType'",NULL);
#endif
 tolua_pushinteger(tolua_S,(lua_Integer)self->nTconndServerType);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: nTconndServerType of class  SERVER_CONFIG */
#ifndef TOLUA_DISABLE_tolua_set_SERVER_CONFIG_nTconndServerType
static int tolua_set_SERVER_CONFIG_nTconndServerType(lua_State* tolua_S)
{
  SERVER_CONFIG* self = (SERVER_CONFIG*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'nTconndServerType'",NULL);
 if (!tolua_isinteger(tolua_S,2,0,&tolua_err))
 tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->nTconndServerType = ((int32_t)  tolua_tointeger(tolua_S,2,0))
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
  tolua_variable(tolua_S,"nInitSessionMgrCount",tolua_get_SERVER_CONFIG_nInitSessionMgrCount,tolua_set_SERVER_CONFIG_nInitSessionMgrCount);
  tolua_variable(tolua_S,"nTconndServerType",tolua_get_SERVER_CONFIG_nTconndServerType,tolua_set_SERVER_CONFIG_nTconndServerType);
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

