cmake_minimum_required(VERSION 3.15)
project(LuaInterpreter VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

find_program(ANTLR4_TOOL NAMES antlr4)
if(NOT ANTLR4_TOOL)
    message(FATAL_ERROR "ANTLR4 tool not found. Please install ANTLR4 or provide path to antlr4 jar")
endif()

set(ANTLR4_DIR ${CMAKE_CURRENT_SOURCE_DIR}/antlr4)
set(ANTLR4_INCLUDE_DIR ${ANTLR4_DIR}/include)
set(ANTLR4_LIB_DIR ${ANTLR4_DIR}/lib)

find_library(ANTLR4_RUNTIME_LIB 
    NAMES antlr4-runtime libantlr4-runtime
    PATHS ${ANTLR4_LIB_DIR}
    REQUIRED
)

if(NOT ANTLR4_RUNTIME_LIB)
    message(FATAL_ERROR "ANTLR4 runtime library not found in ${ANTLR4_LIB_DIR}")
endif()

set(GRAMMAR_FILE ${CMAKE_CURRENT_SOURCE_DIR}/Lua55Grammar.g4)
set(GENERATED_SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/generated)

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

set_source_files_properties(${GENERATED_FILES} PROPERTIES GENERATED TRUE)

add_custom_command(
    OUTPUT ${GENERATED_FILES}
    COMMAND ${ANTLR4_TOOL} -Dlanguage=Cpp -o ${GENERATED_SRC_DIR} ${GRAMMAR_FILE}
    DEPENDS ${GRAMMAR_FILE}
    COMMENT "Generating ANTLR4 parsers and lexers"
    VERBATIM
)

add_custom_target(generate_antlr DEPENDS ${GENERATED_FILES})

file(GLOB_RECURSE SRC_FILES 
    "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp"
)

file(GLOB_RECURSE HEADER_FILES
    "${CMAKE_CURRENT_SOURCE_DIR}/src/*.h"
    "${CMAKE_CURRENT_SOURCE_DIR}/src/*.hpp"
)

add_executable(
    "luai"
    ${SRC_FILES}
    ${HEADER_FILES}
    ${GENERATED_FILES}
)

add_dependencies("luai" generate_antlr)

target_include_directories(
    "luai" PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/src
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${GENERATED_SRC_DIR}
    ${ANTLR4_INCLUDE_DIR}
)

target_link_libraries(
    "luai" PRIVATE
    ${ANTLR4_RUNTIME_LIB}
)

target_compile_options(
    "luai" PRIVATE
    -Wall -Wextra
    -Wno-missing-field-initializers
    -Wno-unused-parameter
    -ggdb -O0
)

message(STATUS "ANTLR4 include dir: ${ANTLR4_INCLUDE_DIR}")
message(STATUS "ANTLR4 library: ${ANTLR4_RUNTIME_LIB}")
message(STATUS "Source files found: ${SRC_FILES}")