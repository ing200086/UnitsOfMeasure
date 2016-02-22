#include "test.h"

TEST_F(CreateBasicDimension, Unitless) {
    object = new Dimension<>(0, 0, 0, 0, 0, 0, 0);
    AssertDimensionals<>(object, 0, 0, 0, 0, 0, 0, 0);
}

TEST_F(CreateBasicDimension, Length) {
    object = new Dimension<>(1, 0, 0, 0, 0, 0, 0);
    AssertDimensionals<>(object, 1, 0, 0, 0, 0, 0, 0);
}

TEST_F(CreateBasicDimension, Mass) {
    object = new Dimension<>(0, 1, 0, 0, 0, 0, 0);
    AssertDimensionals<>(object, 0, 1, 0, 0, 0, 0, 0);
}

TEST_F(CreateBasicDimension, Time) {
    object = new Dimension<>(0, 0, 1, 0, 0, 0, 0);
    AssertDimensionals<>(object, 0, 0, 1, 0, 0, 0, 0);
}

TEST_F(CreateBasicDimension, ElectricCurrent) {
    object = new Dimension<>(0, 0, 0, 1, 0, 0, 0);
    AssertDimensionals<>(object, 0, 0, 0, 1, 0, 0, 0);
}

TEST_F(CreateBasicDimension, Temperature) {
    object = new Dimension<>(0, 0, 0, 0, 1, 0, 0);
    AssertDimensionals<>(object, 0, 0, 0, 0, 1, 0, 0);
}

TEST_F(CreateBasicDimension, LuminousIntensity) {
    object = new Dimension<>(0, 0, 0, 0, 0, 1, 0);
    AssertDimensionals<>(object, 0, 0, 0, 0, 0, 1, 0);
}

TEST_F(CreateBasicDimension, AmountOfSubstance) {
    object = new Dimension<>(0, 0, 0, 0, 0, 0, 1);
    AssertDimensionals<>(object, 0, 0, 0, 0, 0, 0, 1);
}