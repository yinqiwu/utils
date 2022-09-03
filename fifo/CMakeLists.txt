cmake_minimum_required(VERSION 3.22.1)
project(fifo)
set(SOURCES_FILE 
        examples/demo/main.c
        fifo.c)
add_executable(${PROJECT_NAME} ${SOURCES_FILE})
target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR})