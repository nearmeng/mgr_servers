cmake_minimum_required (VERSION 3.20)

project(mgr_servers)

include (FetchContent)
FetchContent_Declare(cmake_tool GIT_REPOSITORY https://github.com/nearmeng/cmake_tools.git GIT_TAG master)
FetchContent_MakeAvailable(cmake_tool)

add_subdirectory(conn_server)
add_subdirectory(control_server)
add_subdirectory(db_proxy)
add_subdirectory(router_server)
add_subdirectory(service_mgr_server)
