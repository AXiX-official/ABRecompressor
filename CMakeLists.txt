cmake_minimum_required(VERSION 3.14)

set(MODULE_NAME ABRecompressor)

project(${MODULE_NAME})

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(C_FLAGS "${C_FLAGS} -O2 -fvisibility=hidden")
set(LINKER_FLAGS "${LINKER_FLAGS} -Wl,-exclude-libs,ALL -Wl,--gc-sections -Wl,--strip-all")

include_directories(include)

find_package(lz4 CONFIG REQUIRED)
find_package(liblzma CONFIG REQUIRED)

add_library(ABRecompressor SHARED src/ABRecompressor.cpp)

target_compile_definitions(ABRecompressor PRIVATE ABRECOMPRESSOR_EXPORTS)

target_link_libraries(ABRecompressor PRIVATE lz4::lz4 liblzma::liblzma)