cmake_minimum_required(VERSION 3.11)

project(sandbox VERSION 1.0.0) 

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_DIR "src/")
set(RAYENGINE_DIR "../rayengine/")


add_subdirectory(${RAYENGINE_DIR} rayengine)

add_executable(sandbox
    ${SOURCE_DIR}sandbox.cpp
)

target_include_directories(sandbox PRIVATE
	${RAYENGINE_DIR}core/log.hpp
	${RAYENGINE_DIR}core/entry.hpp
)

target_link_libraries (sandbox PRIVATE rayengine)
