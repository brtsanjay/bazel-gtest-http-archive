cc_library(
    name = "hello_world_lib",
    srcs = ["src/hello_world.cc"],
    hdrs = ["include/hello_world.h"],
    strip_include_prefix = "include",
)

cc_binary(
    name = "hello_world_app",
    srcs = ["src/main.cc"],
    deps = [":hello_world_lib"],
)

cc_test(
    name = "hello_world_test",
    srcs = ["test/hello_world_test.cc"],
    deps = [
        ":hello_world_lib",
        "@gtest//:main",
    ],
)
