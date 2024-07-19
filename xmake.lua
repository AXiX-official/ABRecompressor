set_project("ABRecompressor")
set_version("1.0.0")

add_rules("mode.debug", "mode.release")

set_toolchains("msvc")

add_requires("vcpkg::lz4", {alias = "lz4"})
add_requires("vcpkg::liblzma", {alias = "lzma"})

add_includedirs("include")

target("ABRecompressor")
    set_kind("shared")
    add_cflags("-O2")
    add_ldflags("-Wl,-exclude-libs,ALL", "-Wl,--gc-sections", "-Wl,--strip-all")
    add_files("src/*.cpp")
    add_packages("lz4", "lzma")