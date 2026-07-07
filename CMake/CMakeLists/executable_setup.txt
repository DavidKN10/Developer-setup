cmake_minimum_required(VERSION 3.20)
project(project_name LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SOURCE_FILES
  ".cpp files here"
)

set(HEADER_FILES
  "header files here"
)

add_executable(project_name
	${SOURCE_FILES}
)

target_include_directories(project_name PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)