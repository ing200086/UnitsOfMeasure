#include <string>

class Meter {
    int orderOfMagnitude_;

    std::string encodeHead() {
        if (orderOfMagnitude_ >= 24) return "Y";
        if (orderOfMagnitude_ >= 21) return "Z";
        if (orderOfMagnitude_ >= 18) return "E";
        if (orderOfMagnitude_ >= 15) return "P";
        if (orderOfMagnitude_ >= 12) return "T";
        if (orderOfMagnitude_ >= 9) return "G";
        if (orderOfMagnitude_ >= 6) return "M";
        if (orderOfMagnitude_ >= 3) return "k";
        if (orderOfMagnitude_ == 2) return "h";
        if (orderOfMagnitude_ == 1) return "da";
        return "";
    }
public:
    Meter(int orderOfMagnitude = 0) { orderOfMagnitude_ = orderOfMagnitude; }
    int orderOfMagnitude() { return orderOfMagnitude_; }


    std::string toString() {
        return encodeHead() + "m";
    }
};

#include "gmock/gmock.h"
    using ::testing::Eq;
    using ::testing::TestWithParam;

struct OoMResult {
    int orderOfMagnitude;
    std::string expectation;

    OoMResult(int ooM, std::string exp): orderOfMagnitude(ooM), expectation(exp) {}
};

class orderOfMagnitudeTester: public TestWithParam<OoMResult> {
protected:
    int orderOfMagnitude_;
    std::string expectedAbbreviation_;

public:
    virtual void SetUp() {
        OoMResult result = GetParam();
        orderOfMagnitude_ = result.orderOfMagnitude;
        expectedAbbreviation_ = result.expectation;
    }
};

TEST_P(orderOfMagnitudeTester, AreExpected) {
    Meter unit(orderOfMagnitude_);

    ASSERT_THAT(unit.orderOfMagnitude(), Eq(orderOfMagnitude_));
    ASSERT_THAT(unit.toString(), Eq(expectedAbbreviation_));
}

INSTANTIATE_TEST_CASE_P(matchesExpectations, orderOfMagnitudeTester, ::testing::Values(
    OoMResult(0, "m"), OoMResult(1, "dam"), OoMResult(2, "hm"), OoMResult(3, "km")
    ,OoMResult(4, "km"), OoMResult(5, "km")
    , OoMResult(6, "Mm"), OoMResult(7, "Mm"), OoMResult(8, "Mm")
    , OoMResult(9, "Gm"), OoMResult(10, "Gm"), OoMResult(11, "Gm")
    ,OoMResult(12, "Tm"), OoMResult(13, "Tm"), OoMResult(14, "Tm")
    , OoMResult(15, "Pm"), OoMResult(16, "Pm"), OoMResult(17, "Pm")
    , OoMResult(18, "Em"), OoMResult(19, "Em"), OoMResult(20, "Em")
    , OoMResult(21, "Zm"), OoMResult(22, "Zm"), OoMResult(23, "Zm")
    ,OoMResult(24, "Ym"), OoMResult(25, "Ym")
    ));