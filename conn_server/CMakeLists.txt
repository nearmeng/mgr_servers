fetch_content(server_base https://github.com/nearmeng/server_base.git master)
fetch_content(conn_proto  https://github.com/nearmeng/conn_proto.git master)
fetch_content(cs_proto_common  https://github.com/nearmeng/cs_proto_common.git master)

init_project ()
pre_toluapp(src/script)

pre_project(conn_server RUNTIME)
add_project()
post_project()

target_include_directories(${TARGET_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/inc)
target_link_libraries (${TARGET_NAME}
    mango::server_base
	mango::conn_proto
	mango::cs_proto_common
)