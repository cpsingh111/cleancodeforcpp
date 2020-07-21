#include "paramchecker.h"
#include <gtest/gtest.h>
 
TEST(VitalsTest, BPM) { 
    ASSERT_EQ(false, vitalsAreOk(60, 90, 50));
}
 
TEST(VitalsTest, SPO2) {
    ASSERT_EQ(false, vitalsAreOk(100, 40, 50));
}
 
 
TEST(VitalsTest, RespRate) {
    ASSERT_EQ(false, vitalsAreOk(100, 90, 70));
}

TEST(VitalsTest, Pass) {
    ASSERT_EQ(true, vitalsAreOk(100, 90, 50));
}
 
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
