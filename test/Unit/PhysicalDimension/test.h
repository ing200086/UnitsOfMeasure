#ifndef __TEST_H__
#define __TEST_H__

#include "physicalDimension.h"
#include "gmock/gmock.h"
    using ::testing::Eq;
    using ::testing::Ne;

class CreateBasicDimension: public ::testing::Test {
protected:
    PhysicalDimension *object;

public:
    void AssertDimensionals(PhysicalDimension *testObj, double length, double mass, double time, double electricCurrent
                        , double temperature, double luminousIntensity, double amountOfSubstance) {
        ASSERT_THAT(testObj->length(), Eq(length));
        ASSERT_THAT(testObj->mass(), Eq(mass));
        ASSERT_THAT(testObj->time(), Eq(time));
        ASSERT_THAT(testObj->electricCurrent(), Eq(electricCurrent));
        ASSERT_THAT(testObj->temperature(), Eq(temperature));
        ASSERT_THAT(testObj->luminousIntensity(), Eq(luminousIntensity));
        ASSERT_THAT(testObj->amountOfSubstance(), Eq(amountOfSubstance));
    }
};

#endif