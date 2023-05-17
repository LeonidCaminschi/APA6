#pragma once

#include <iostream>
#include <cmath>
#include <iomanip>

double calculatePi_Mac(int decimalPlaces) {
    double sum = 0.0;

    for (int k = 0; k <= decimalPlaces; k++) {
        double term1 = 4.0 * std::atan(1.0 / 5.0);
        double term2 = std::pow(1.0 / 239.0, k);
        double term3 = std::pow(-1, k);
        double term4 = 2 * k + 1;
        sum += term3 * (term1 / term4) * term2;
    }

    return sum * 4;
}