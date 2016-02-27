#include "test.h"

TEST(Dimensions, AreComparible) {
    PhysicalDimension A(1, 0, 0, 0, 0, 0, 0);
    PhysicalDimension similarToA(1, 0, 0, 0, 0, 0, 0);
    PhysicalDimension B(0, 1, 0, 0, 0, 0, 0);

    ASSERT_TRUE(A == A);
    ASSERT_TRUE(A == similarToA);
    ASSERT_TRUE(A != B);
}

TEST(Dimensions, AssignOneDimensionBasedOnOther) {
    PhysicalDimension A(1, 0, 0, 0, 0, 0, 0);
    PhysicalDimension B = A;

    ASSERT_THAT(A, Eq(B));
}

TEST(Dimensions, OfEquivalentPowersCanBeAddedOrSubtractedProducingSamePowers) {
    PhysicalDimension A(1, 0, 0, 0, 0, 0, 0);
    PhysicalDimension B(1, 0, 0, 0, 0, 0, 0);

    ASSERT_THAT(A+B, Eq(A));
    ASSERT_THAT(A-B, Eq(A));
}

TEST(Dimensions, OfNonEquivalentPowersCannotBeAddedOrSubtracted) {
    PhysicalDimension A(1, 0, 0, 0, 0, 0, 0);
    PhysicalDimension B(0, 1, 0, 0, 0, 0, 0);

    ASSERT_THROW(A+B, std::runtime_error);
    ASSERT_THROW(A-B, std::runtime_error);
}

TEST(Dimensions, CanBeMultipliedOrDivided) {
    PhysicalDimension length(1, 0, 0, 0, 0, 0, 0);
    PhysicalDimension volume(3, 0, 0, 0, 0, 0, 0);
    PhysicalDimension area(2, 0, 0, 0, 0, 0, 0);

    ASSERT_THAT(length*length, Eq(area));
    ASSERT_THAT(volume/area, Eq(length));
}

TEST(Dimensions, CanSquareOrSquareRoot) {
    PhysicalDimension length(1, 0, 0, 0, 0 ,0, 0);
    PhysicalDimension area(2, 0, 0, 0, 0, 0, 0);

    ASSERT_THAT(length^2, Eq(area));
    ASSERT_THAT(area^0.5, Eq(length));
}