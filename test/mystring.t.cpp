#include "gtest/gtest.h"
#include <mystring.h>

namespace {

class TestFixture : public ::testing::Test {
 
 protected:

  TestFixture() {
  }

  ~TestFixture() override {
  }

  void SetUp() override {
     // Code here will be called immediately after the constructor (right
     // before each test).
  }

  void TearDown() override {
     // Code here will be called immediately after each test (right
     // before the destructor).
  }

};

};

TEST_F(TestFixture, TestSizeTrue) {
  jp::MyString str = "Test";
  EXPECT_EQ(str.size(), 4);
}

TEST_F(TestFixture, TestSizeFalse) {
    jp::MyString str = "Test";
    EXPECT_NE(str.size(), 0);
}

TEST_F(TestFixture, TestConcatenation) {
    jp::MyString str1 = "Test";
    jp::MyString str2 = "String";
    jp::MyString str3 = str1 + str2;
    EXPECT_EQ(str3.size(), str1.size());
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}