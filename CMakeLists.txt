cmake_minimum_required(VERSION 3.10)

project("furaibo" C)
set(CMAKE_C_STANDARD 11)
set(CMAKE_VERBOSE_MAKEFILE on)
set(CMAKE_C_COMPILER emcc)
set(CMAKE_C_FLAGS "-flto -g0 -s STANDALONE_WASM -s SIDE_MODULE=1 -s ERROR_ON_UNDEFINED_SYMBOLS=0")
set(CMAKE_EXECUTABLE_SUFFIX ".wasm")

file(GLOB_RECURSE CORE_HDR src/*.h)
file(GLOB_RECURSE CORE_SRC src/*.c)

add_executable(furaibo ${CORE_SRC} ${CORE_HDR})
target_include_directories(furaibo PUBLIC "src/furaibo")
