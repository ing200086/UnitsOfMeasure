#include "test.h"

TEST(Dimensions, AreDimensionallyEquivalentToItself) {
    Dimension<> A(1, 0, 0, 0, 0, 0, 0);
    ASSERT_TRUE(A == A);
}

TEST(Dimensions, AreDimensionallyEquivalent) {
    Dimension<> A(1, 0, 0, 0, 0, 0, 0);
    Dimension<> B(1, 0, 0, 0, 0, 0, 0);
    ASSERT_THAT(A, Eq(B));
}

TEST(Dimensions, AreDimensionallyNotEquivalent) {
    Dimension<> A(1, 0, 0, 0, 0, 0, 0);
    Dimension<> B(0, 1, 0, 0, 0, 0, 0);
    ASSERT_TRUE(A != B);
}

TEST(Dimensions, AssignOneDimensionBasedOnOther) {
    Dimension<> A(1, 0, 0, 0, 0, 0, 0);
    Dimension<> B = A;

    ASSERT_THAT(A, Eq(B));
}

TEST(Dimensions, OfEquivalentPowersCanBeAddedToProduceSameEquivalent) {
    Dimension<> A(1, 0, 0, 0, 0, 0, 0);
    Dimension<> B(1, 0, 0, 0, 0, 0, 0);

    Dimension<> C = A + B;
    ASSERT_THAT(C, Eq(A));
    ASSERT_THAT(&C, Ne(&A));
}

TEST(Dimensions, OfNonEquivalentPowersCannotBeAdded) {
    Dimension<> A(1, 0, 0, 0, 0, 0, 0);
    Dimension<> B(0, 1, 0, 0, 0, 0, 0);

    ASSERT_THROW(A + B, std::runtime_error);
}

TEST(Dimensions, OfEquivalentPowersCanBeSubtractedToProduceSameEquivalent) {
    Dimension<> A(1, 0, 0, 0, 0, 0, 0);
    Dimension<> B(1, 0, 0, 0, 0, 0, 0);

    Dimension<> C = A - B;
    ASSERT_THAT(C, Eq(A));
    ASSERT_THAT(&C, Ne(&A));
}

TEST(Dimensions, OfNonEquivalentPowersCannotBeSubtracted) {
    Dimension<> A(1, 0, 0, 0, 0, 0, 0);
    Dimension<> B(0, 1, 0, 0, 0, 0, 0);

    ASSERT_THROW(A - B, std::runtime_error);
}

TEST(Dimensions, MultipliedWillSumThePowersOfBothUnits) {
    Dimension<> A(1, 0, 0, 0, 0, 0, 0);
    Dimension<> B(2, -1, 0, 0, 0, 0, 0);

    Dimension<> C = A * B;
    ASSERT_THAT(C, Eq(Dimension<>(3, -1, 0, 0, 0, 0, 0)));
}

TEST(Dimensions, DividedWillSubtractTheSecondFactorUnitsFromTheFirstFactor) {
    Dimension<> A(1, 0, 0, 0, 0, 0, 0);
    Dimension<> B(2, -1, 0, 0, 0, 0, 0);

    Dimension<> C = A / B;
    ASSERT_THAT(C, Eq(Dimension<>(-1, 1, 0, 0, 0, 0, 0)));
}