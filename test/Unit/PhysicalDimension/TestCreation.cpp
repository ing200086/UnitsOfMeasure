#include "test.h"

TEST_F(CreateBasicDimension, Unitless) {
    object = new PhysicalDimension(0, 0, 0, 0, 0, 0, 0);
    AssertDimensionals(object, 0, 0, 0, 0, 0, 0, 0);
}

TEST_F(CreateBasicDimension, Length) {
    object = new PhysicalDimension(1, 0, 0, 0, 0, 0, 0);
    AssertDimensionals(object, 1, 0, 0, 0, 0, 0, 0);
}

TEST_F(CreateBasicDimension, Mass) {
    object = new PhysicalDimension(0, 1, 0, 0, 0, 0, 0);
    AssertDimensionals(object, 0, 1, 0, 0, 0, 0, 0);
}

TEST_F(CreateBasicDimension, Time) {
    object = new PhysicalDimension(0, 0, 1, 0, 0, 0, 0);
    AssertDimensionals(object, 0, 0, 1, 0, 0, 0, 0);
}

TEST_F(CreateBasicDimension, ElectricCurrent) {
    object = new PhysicalDimension(0, 0, 0, 1, 0, 0, 0);
    AssertDimensionals(object, 0, 0, 0, 1, 0, 0, 0);
}

TEST_F(CreateBasicDimension, Temperature) {
    object = new PhysicalDimension(0, 0, 0, 0, 1, 0, 0);
    AssertDimensionals(object, 0, 0, 0, 0, 1, 0, 0);
}

TEST_F(CreateBasicDimension, LuminousIntensity) {
    object = new PhysicalDimension(0, 0, 0, 0, 0, 1, 0);
    AssertDimensionals(object, 0, 0, 0, 0, 0, 1, 0);
}

TEST_F(CreateBasicDimension, AmountOfSubstance) {
    object = new PhysicalDimension(0, 0, 0, 0, 0, 0, 1);
    AssertDimensionals(object, 0, 0, 0, 0, 0, 0, 1);
}