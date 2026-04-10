cmake_minimum_required(VERSION 3.15)
project(LuaInterpreter VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

include(FetchContent -DCMAKE_BUILD_TYPE=Release)

FetchContent_Declare(
    antlr4
    GIT_REPOSITORY https://github.com/antlr/antlr4.git
    GIT_TAG 4.13.2
)

set(ANTLR4_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(ANTLR4_BUILD_CPP_TESTS OFF CACHE BOOL "" FORCE)
set(ANTLR4_BUILD_SHARED OFF CACHE BOOL "" FORCE)
set(ANTLR4_USE_GOOGLE_TEST OFF CACHE BOOL "" FORCE)
set(CMAKE_SKIP_INSTALL_ALL_DEPENDENCY ON CACHE BOOL "" FORCE)
set(ANTLR4_INSTALL OFF CACHE BOOL "" FORCE)
set(CMAKE_POLICY_DEFAULT_CMP0077 NEW)


FetchContent_MakeAvailable(antlr4)


add_subdirectory(${antlr4_SOURCE_DIR}/runtime/Cpp ${antlr4_BINARY_DIR})

if(NOT TARGET antlr4_static)
    message(FATAL_ERROR "antlr4_static target not created")
endif()

find_program(JAVA_PROGRAM NAMES java REQUIRED)

set(ANTLR4_TOOL_JAR ${CMAKE_BINARY_DIR}/antlr-4.13.2-complete.jar)
if(NOT EXISTS ${ANTLR4_TOOL_JAR})
    message(STATUS "Downloading ANTLR4 tool jar...")
    file(DOWNLOAD 
        https://www.antlr.org/download/antlr-4.13.2-complete.jar
        ${ANTLR4_TOOL_JAR}
        SHOW_PROGRESS
    )
endif()

set(GRAMMAR_FILE ${CMAKE_CURRENT_SOURCE_DIR}/Lua55Grammar.g4)
set(GENERATED_SRC_DIR ${CMAKE_BINARY_DIR}/generated)

if(NOT EXISTS ${GRAMMAR_FILE})
    message(FATAL_ERROR "Grammar file not found: ${GRAMMAR_FILE}")
endif()

file(MAKE_DIRECTORY ${GENERATED_SRC_DIR})

set(GENERATED_FILES
    ${GENERATED_SRC_DIR}/Lua55GrammarLexer.cpp
    ${GENERATED_SRC_DIR}/Lua55GrammarLexer.h
    ${GENERATED_SRC_DIR}/Lua55GrammarParser.cpp
    ${GENERATED_SRC_DIR}/Lua55GrammarParser.h
    ${GENERATED_SRC_DIR}/Lua55GrammarBaseListener.cpp
    ${GENERATED_SRC_DIR}/Lua55GrammarBaseListener.h
    ${GENERATED_SRC_DIR}/Lua55GrammarListener.cpp
    ${GENERATED_SRC_DIR}/Lua55GrammarListener.h
)

add_custom_command(
    OUTPUT ${GENERATED_FILES}
    COMMAND ${CMAKE_COMMAND} -E make_directory ${GENERATED_SRC_DIR}
    COMMAND ${JAVA_PROGRAM} -jar ${ANTLR4_TOOL_JAR}
        -Dlanguage=Cpp
        -o ${GENERATED_SRC_DIR}
        ${GRAMMAR_FILE}
    DEPENDS ${GRAMMAR_FILE}
    COMMENT "Generating ANTLR4 parser from grammar"
    VERBATIM
)

add_custom_target(generate_parser DEPENDS ${GENERATED_FILES})

file(GLOB_RECURSE SRC_FILES 
    ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp
)

file(GLOB_RECURSE HEADER_FILES
    ${CMAKE_CURRENT_SOURCE_DIR}/src/*.h
    ${CMAKE_CURRENT_SOURCE_DIR}/src/*.hpp
)


add_executable(
    luai
    ${SRC_FILES}
    ${HEADER_FILES}
    ${GENERATED_FILES}
)

add_dependencies(luai generate_parser antlr4_static)

target_include_directories(luai PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/src
    ${CMAKE_BINARY_DIR}
    ${antlr4_SOURCE_DIR}/runtime/Cpp/runtime/src
)

target_link_libraries(luai PRIVATE antlr4_static)

target_compile_options(luai PRIVATE
    -Wall -Wextra
    -Wno-missing-field-initializers
    -Wno-unused-parameter
    -ggdb -O0
    -DINTERPRETER_DEBUG
)

message(STATUS "ANTLR4 source dir: ${antlr4_SOURCE_DIR}")
message(STATUS "ANTLR4 binary dir: ${antlr4_BINARY_DIR}")
message(STATUS "ANTLR4 tool jar: ${ANTLR4_TOOL_JAR}")
message(STATUS "Generated files dir: ${GENERATED_SRC_DIR}")