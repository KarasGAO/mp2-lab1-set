//#include <gtest.h>
#include "tset.h"
#include "tbitfield.h"
#include<iostream>

int main(int argc, char **argv) {
    //::testing::InitGoogleTest(&argc, argv);
    //return RUN_ALL_TESTS();
    //int RE_NG = 0;
    //int RE_VG = 100;
    //TSet RE(RE_VG);
    //for (int i = 0; i < RE.GetMaxPower(); i++) {
    //    RE.InsElem(i);
    //}
    //for (int i = 2; i < RE.GetMaxPower(); i++) {
    //     if ((RE.IsMember(i))) {
    //        int k = 2;
    //        while (i * k < RE.GetMaxPower()) {
    //            RE.DelElem(k * i);
    //            k++;
    //        }
    //    }
    //}
   
    //std::cout << RE;    
    int RE_VG = 100;
    TSet RE(RE_VG);
    for (int i = 2; i < RE_VG; i+=2) {
        RE.InsElem(i);
    }
    RE.DelElem(2);
    std::cout << RE;
}
