project(Chrystal)

set(CHRYSTAL_SOURCE_FILES "src/Application.cpp")

set(CHRYSTAL_HEADER_FILES "include/Chrystal/Application.h" "include/Chrystal/Chrystal.h" "include/Chrystal/Core.h" "include/Chrystal/EntryPoint.h")

add_library(Chrystal SHARED ${CHRYSTAL_SOURCE_FILES} ${CHRYSTAL_HEADER_FILES})

target_include_directories(Chrystal PUBLIC "${CMAKE_CURRENT_LIST_DIR}/include")

target_compile_definitions(Chrystal PRIVATE CH_PLATFORM_WINDOWS CH_DLL_EXPORT)
