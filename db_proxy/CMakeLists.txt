fetch_content(server_base https://github.com/nearmeng/server_base.git master)
fetch_content(db_proxy_proto https://github.com/nearmeng/db_proxy_proto.git master)

init_project ()
pre_toluapp(src/script)

pre_project(db_proxy RUNTIME)
add_project()
post_project(${CMAKE_CURRENT_SOURCE_DIR}/../bin/${TARGET_NAME})

target_include_directories(${TARGET_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/inc)
target_link_libraries (${TARGET_NAME}
    mango::server_base
	mango::db_proxy_proto
)

