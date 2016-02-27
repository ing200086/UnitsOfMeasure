#ifndef __PHYSICAL_DIMENSION_H__
#define __PHYSICAL_DIMENSION_H__

#include <stdexcept>
#include <array>

class PhysicalDimension {
protected:
    std::array<double, 7> powers;

public:
    PhysicalDimension(double length, double mass, double time, double electricCurrent, double temperature
                        , double luminousIntensity, double amountOfSubstance) {
        powers[0] = length;
        powers[1] = mass;
        powers[2] = time;
        powers[3] = electricCurrent;
        powers[4] = temperature;
        powers[5] = luminousIntensity;
        powers[6] = amountOfSubstance;
    }

    double length() { return powers[0]; }
    double mass() { return powers[1]; }
    double time() { return powers[2]; }
    double electricCurrent() { return powers[3]; }
    double temperature() { return powers[4]; }
    double luminousIntensity() { return powers[5]; }
    double amountOfSubstance() { return powers[6]; }

    bool operator== (const PhysicalDimension &rhs) const {
        return (this->powers == rhs.powers);
    }

    bool operator!= (const PhysicalDimension &rhs) const {
        return (this->powers != rhs.powers);
    }

    PhysicalDimension operator+ (const PhysicalDimension &term) const {
        if ((*this) != term) { throw std::runtime_error("PhysicalDimensions between terms do not match."); }
        return (*this);
    }

    PhysicalDimension operator- (const PhysicalDimension &term) const {
        if ((*this) != term) { throw std::runtime_error("PhysicalDimensions between terms do not match."); }
        return (*this);
    }

    PhysicalDimension operator^ (const double &pow) const {
        PhysicalDimension result(powers[0] * pow
                                                ,powers[1] * pow
                                                ,powers[2] * pow
                                                ,powers[3] * pow
                                                ,powers[4] * pow
                                                ,powers[5] * pow
                                                ,powers[6] * pow);

        return result;
    }

    PhysicalDimension operator* (const PhysicalDimension &factor) const {
        std::array<double, 7> combined;

        for(int i = 0; i < 7; i++) {
            combined[i] = (*this).powers[i] + factor.powers[i];
        }

        return PhysicalDimension (combined[0], combined[1]
                                                , combined[2], combined[3]
                                                , combined[4], combined[5]
                                                , combined[6]);
    }

    PhysicalDimension operator/ (const PhysicalDimension &factor) const {
        std::array<double, 7> combined;

        for(int i = 0; i < 7; i++) {
            combined[i] = (*this).powers[i] - factor.powers[i];
        }

        return PhysicalDimension (combined[0], combined[1]
                                                , combined[2], combined[3]
                                                , combined[4], combined[5]
                                                , combined[6]);
    }
};

#endif