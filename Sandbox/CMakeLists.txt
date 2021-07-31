project(Sandbox)

add_executable(Sandbox "src/Sandbox.cpp")

target_link_libraries(Sandbox PUBLIC Chrystal)

target_compile_definitions(Sandbox PRIVATE CH_PLATFORM_WINDOWS)