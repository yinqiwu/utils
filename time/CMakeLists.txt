cmake_minimum_required(VERSION 3.22.1)
project(time_demo)
set(SOURCE main.c utc2ltime.c)
add_executable(${PROJECT_NAME} ${SOURCE})
target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR})


