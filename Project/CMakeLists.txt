cmake_minimum_required(VERSION 3.10)

project(Grammar)
set(CMAKE_CXX_STANDARD 20)
set(THREADS_PREFER_PTHREAD_FLAG ON)

if (APPLE)
    set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fuse-ld=lld")
endif()

find_package(LLVM REQUIRED CONFIG)

add_subdirectory(runtime)
include_directories(runtime/src)

include_directories(${LLVM_INCLUDE_DIRS})
add_definitions(${LLVM_DEFINITIONS})

add_executable(
    Program_ir
    src/GrammarBaseVisitor.cpp
    src/GrammarVisitor.cpp
    src/GrammarLexer.cpp 
    src/GrammarParser.cpp 
    src/IRVisitor.cpp
    src/Table.cpp
    main.cpp
)

target_include_directories(
    Program_ir PRIVATE ${PROJECT_SOURCE_DIR}
)

llvm_map_components_to_libnames(
    llvm_libs 
    x86info
    x86asmparser
    support 
    core 
    irreader 
    target 
    mc 
    option 
    codegen 
    mcjit
    nativecodegen
)

find_package(Threads REQUIRED)

target_link_directories(Program_ir PRIVATE dist)
target_link_libraries(Program_ir antlr4-runtime)
target_link_libraries(Program_ir Threads::Threads)
target_link_libraries(Program_ir ${llvm_libs})
