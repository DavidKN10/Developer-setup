cmake_minimum_required(VERSION 3.20)
project(project_name LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(SOURCE_FILES
  ".cpp files here"
)

set(HEADER_FILES
  "header files here"
)

add_library(project_name SHARED
	${SOURCE_FILES}
)

target_include_directories(project_name PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

# LIB_NAME depends on what you named your cpp library
target_compile_definitions(project_name PRIVATE LIB_NAME)