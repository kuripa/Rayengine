cmake_minimum_required(VERSION 3.11)

project(rayengine VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_DIR "src/")
set(VENDOR_DIR "vendor/")

# Setting parameters for raylib
set(BUILD_EXAMPLES OFF CACHE BOOL "" FORCE) # don't build the supplied examples
set(BUILD_GAMES    OFF CACHE BOOL "" FORCE) # or games


# Create the lib file
add_library(rayengine STATIC
    ${SOURCE_DIR}rayengine.cpp
	${SOURCE_DIR}core/log.cpp
	${SOURCE_DIR}core/application.cpp

)

# Add header files
target_include_directories(rayengine PUBLIC
	${SOURCE_DIR}
)

add_subdirectory(
	${VENDOR_DIR}raylib
)

add_subdirectory(
	${VENDOR_DIR}spdlog
)

# Setup spdlog
if(NOT TARGET spdlog)
    # Stand-alone build
    find_package(spdlog REQUIRED)
endif() 

set(raylib_VERBOSE 1)

target_link_libraries (rayengine PUBLIC raylib spdlog::spdlog)
