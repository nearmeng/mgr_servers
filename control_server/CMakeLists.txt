fetch_content(server_base https://github.com/nearmeng/server_base.git master)

init_project ()
pre_toluapp(src/script)

pre_project(control_server RUNTIME)
add_project()
post_project(${CMAKE_CURRENT_SOURCE_DIR}/../bin/${TARGET_NAME})

target_include_directories(${TARGET_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/inc)
target_link_libraries (${TARGET_NAME}
    mango::server_base
)