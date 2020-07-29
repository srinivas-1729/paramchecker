#include "paramchecker.h"
#include <gtest/gtest.h>

#define BPM_VAL 100
#define SPO2_VAL 100
#define RESPRATE_VAL 50 

vital_config_s vitalValList[] = {
 {BPM_VAL, 70, 150},
 {SPO2_VAL, 80, 150},
 {RESPRATE_VAL, 30, 60}
};

vital_param_s vitalList = {
  &vitalValList[0],
  sizeof(vitalValList)/sizeof(vitalValList[0])
};

TEST(VitalsTest, BPM) { 
    ASSERT_EQ(true, vitalsAreOk(&vitalList));
}
 
// TEST(VitalsTest, SPO2) {
    // ASSERT_EQ(false, vitalsAreOk(100, 40, 50));
// }

// TEST(VitalsTest, ReadingsOk) {
    // ASSERT_EQ(true, isReadingsOk(30, 10, 70));
// }

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
