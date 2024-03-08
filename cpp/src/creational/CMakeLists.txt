file(GLOB_RECURSE 
    creational_src_files 
    CONFIGURE_DEPENDS ${PROJECT_SOURCE_DIR}/src/creational "*.cpp")
file(GLOB_RECURSE 
    creational_header_files 
    CONFIGURE_DEPENDS ${PROJECT_SOURCE_DIR}/inc/creational "*.h")

add_library(lib_creational
    ${creational_src_files}
    ${creational_header_files})

target_include_directories(lib_creational
    PUBLIC ${PROJECT_SOURCE_DIR}/inc/creational)