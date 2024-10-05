cmake_minimum_required(VERSION 3.10)

project(Grammar)
set(CMAKE_CXX_STANDARD 20)
set(THREADS_PREFER_PTHREAD_FLAG ON)

add_subdirectory(runtime)
include_directories(runtime/src)

add_executable(
    Program
    src/GrammarBaseVisitor.cpp
    src/InterpretVisitor.cpp
    src/PrintVisitor.cpp
    src/GrammarVisitor.cpp
    src/GrammarLexer.cpp 
    src/GrammarParser.cpp 
    main.cpp
)

find_package(Threads REQUIRED)

target_link_directories(Program PRIVATE dist)
target_link_libraries(Program antlr4-runtime)
target_link_libraries(Program Threads::Threads)
