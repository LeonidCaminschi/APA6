#pragma once

#include <iostream>
#include <cmath>
#include <iomanip>

unsigned long long factorial(unsigned long long n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

double calculatePi_Chu(int decimalPlaces) {
    int iterations = static_cast<int>(std::ceil(decimalPlaces / 14.181647462725477)); // Adjust the number of iterations based on the desired decimal places
    double sum = 0.0;

    for (int k = 0; k <= iterations; k++) {
        unsigned long long numerator = factorial(6 * k) * (545140134 * k + 13591409);
        unsigned long long denominator = factorial(3 * k) * std::pow(factorial(k), 3) * std::pow(-262537412640768000.0, k);
        sum += static_cast<double>(numerator) / static_cast<double>(denominator);
    }

    double pi = 1 / (12 * sum);
    return pi;
}
