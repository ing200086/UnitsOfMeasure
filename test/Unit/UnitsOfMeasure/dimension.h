#ifndef __DIMENSION_H__
#define __DIMENSION_H__

#include <stdexcept>
#include <array>

template <typename T = int>
class Dimension {
protected:
    std::array<T, 7> powers;

public:
    Dimension(T length, T mass, T time, T electricCurrent, T temperature
                        , T luminousIntensity, T amountOfSubstance) {
        powers[0] = length;
        powers[1] = mass;
        powers[2] = time;
        powers[3] = electricCurrent;
        powers[4] = temperature;
        powers[5] = luminousIntensity;
        powers[6] = amountOfSubstance;
    }

    T length() { return powers[0]; }
    T mass() { return powers[1]; }
    T time() { return powers[2]; }
    T electricCurrent() { return powers[3]; }
    T temperature() { return powers[4]; }
    T luminousIntensity() { return powers[5]; }
    T amountOfSubstance() { return powers[6]; }

    bool operator== (const Dimension<T> &rhs) const {
        return (this->powers == rhs.powers);
    }

    bool operator!= (const Dimension<T> &rhs) const {
        return (this->powers != rhs.powers);
    }

    Dimension<T> operator+ (const Dimension<T> &term) const {
        if ((*this) != term) { throw std::runtime_error("Dimensions between terms do not match."); }
        return (*this);
    }

    Dimension<T> operator- (const Dimension<T> &term) const {
        if ((*this) != term) { throw std::runtime_error("Dimensions between terms do not match."); }
        return (*this);
    }

    Dimension<T> operator* (const Dimension<T> &factor) const {
        std::array<T, 7> combined;

        for(int i = 0; i < 7; i++) {
            combined[i] = (*this).powers[i] + factor.powers[i];
        }

        return Dimension<T> (combined[0], combined[1]
                                                , combined[2], combined[3]
                                                , combined[4], combined[5]
                                                , combined[6]);
    }

    Dimension<T> operator/ (const Dimension<T> &factor) const {
        std::array<T, 7> combined;

        for(int i = 0; i < 7; i++) {
            combined[i] = (*this).powers[i] - factor.powers[i];
        }

        return Dimension<T> (combined[0], combined[1]
                                                , combined[2], combined[3]
                                                , combined[4], combined[5]
                                                , combined[6]);
    }
};

#endif