cmake_minimum_required(VERSION 3.0.0)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

set(COMPILE_FLAGS "-Wall -pedantic-errors -Werror -ggdb")
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)


project(a.out.src)

file(GLOB APP_SRC_FILES ${CMAKE_SOURCE_DIR}/src/*.cpp)

set(APP_SRC_FILES_EXCEPT_MAIN ${APP_SRC_FILES})
list(REMOVE_ITEM APP_SRC_FILES_EXCEPT_MAIN ${CMAKE_SOURCE_DIR}/src/main.cpp)

add_executable(${PROJECT_NAME} ${APP_SRC_FILES})
set_target_properties(${PROJECT_NAME} PROPERTIES COMPILE_FLAGS ${COMPILE_FLAGS})
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/src)
target_link_libraries(${PROJECT_NAME} pthread)

project(a.out.tests)

file(GLOB TEST_SRC_FILES ${CMAKE_SOURCE_DIR}/tests/*.cpp)

if(NOT TEST_SRC_FILES)
    message(FATAL_ERROR "No test source files found.")
endif()

add_executable(${PROJECT_NAME} ${TEST_SRC_FILES} ${APP_SRC_FILES_EXCEPT_MAIN})
set_target_properties(${PROJECT_NAME} PROPERTIES COMPILE_FLAGS ${COMPILE_FLAGS})
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/src)
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/tests)
target_link_libraries(${PROJECT_NAME} pthread)


include(CTest)
enable_testing()

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
