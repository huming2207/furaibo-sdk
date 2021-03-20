cmake_minimum_required(VERSION 3.17)
project("furaibo" C)

set(CMAKE_CROSSCOMPILING TRUE)
set(CMAKE_SYSTEM_NAME Generic)
set(CMAKE_SYSTEM_PROCESSOR wasm32)

# Clang target triple
SET(TARGET wasm32)

# specify the cross compiler
SET(CMAKE_C_COMPILER_TARGET ${TARGET})
SET(CMAKE_C_COMPILER clang)
SET(CMAKE_CXX_COMPILER_TARGET ${TARGET})
SET(CMAKE_CXX_COMPILER clang++)
SET(CMAKE_ASM_COMPILER_TARGET ${TARGET})
SET(CMAKE_ASM_COMPILER clang)

set(CMAKE_EXE_LINKER_FLAGS "-Wl,--no-entry -Wl,--allow-undefined -Wl,--stack-first -Wl,-z,stack-size=512")
set(CMAKE_C_FLAGS "--target=wasm32 --no-standard-libraries -fno-builtin-printf -g0")
set(CMAKE_CXX_FLAGS "--target=wasm32 --no-standard-libraries -fno-builtin-printf -g0")


set(CMAKE_C_STANDARD 11)
set(CMAKE_VERBOSE_MAKEFILE on)
set(CMAKE_EXECUTABLE_SUFFIX ".wasm")

file(GLOB_RECURSE CORE_HDR src/*.h)
file(GLOB_RECURSE CORE_SRC src/*.c)

add_executable(furaibo ${CORE_SRC} ${CORE_HDR})
target_include_directories(furaibo PUBLIC "src/furaibo")
