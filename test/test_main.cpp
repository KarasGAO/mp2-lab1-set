//#include <gtest.h>
#include "tset.h"
#include "tbitfield.h"
#include<iostream>

int main(int argc, char **argv) {
    //::testing::InitGoogleTest(&argc, argv);
    //return RUN_ALL_TESTS();
    TSet TEST(10);
    TEST.InsElem(5);
    std::cout << TEST;
}
