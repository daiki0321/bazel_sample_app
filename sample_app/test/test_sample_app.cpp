#include <gtest/gtest.h>

#include "sample_lib.h"

TEST(FactorialTest, get_greet){

    const std::string who = "Hoge";
    const std::string str = get_greet(who);

    EXPECT_EQ("Hello Hoge", str);

}
int main(int argc, char **argv) {

  ::testing::InitGoogleTest(&argc, argv);

  return RUN_ALL_TESTS();

}

