#pragma once

#include <iostream>
#include <cmath>
#include <iomanip>

// Function to calculate π using the Bailey-Borwein-Plouffe (BBP) formula
double calculatePi_BBP(int decimalPlaces) {
    double sum = 0.0;

    for (int k = 0; k <= decimalPlaces; k++) {
        double term1 = 1.0 / std::pow(16, k);
        double term2 = 4.0 / (8 * k + 1);
        double term3 = 2.0 / (8 * k + 4);
        double term4 = 1.0 / (8 * k + 5);
        double term5 = 1.0 / (8 * k + 6);
        sum += term1 * (term2 - term3 - term4 - term5);
    }

    return sum;
}