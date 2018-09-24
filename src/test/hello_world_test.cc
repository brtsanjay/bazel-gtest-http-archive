#include "gtest/gtest.h"
#include "hello_world.h"

TEST(HelloWorld, TestOutput) {
    EXPECT_EQ("Hello World!", hello_world::hello());
}
