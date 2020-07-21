#include "paramchecker.h"
#include <gtest/gtest.h>
 
TEST(VitalsTest, BPM) { 
    ASSERT_EQ(false, vitalsAreOk(60, 80, 50));
}
 
TEST(VitalsTest, SPO2) {
    ASSERT_EQ(false, vitalsAreOk(100, 40, 50));
 
TEST(VitalsTest, RespRate) {
    ASSERT_EQ(false, vitalsAreOk(100, 40, 70));

TEST(VitalsTest, Pass) {
    ASSERT_EQ(true, vitalsAreOk(100, 80, 50));
}
 
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
