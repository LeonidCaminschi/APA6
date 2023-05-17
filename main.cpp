#include <iostream>
#include <chrono>
#include <iomanip>

#include "Chudnovsky.h"
#include "BBP.h"
#include "Machin.h"

using namespace std;

void functions(void (*f)(int), int target) {
    auto start_timer = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);

    f(target);

    auto end_timer = chrono::high_resolution_clock::now();

    double time_taken =
            chrono::duration_cast<chrono::nanoseconds>(end_timer - start_timer).count();

    time_taken *= 1e-9;
    cout << " " << time_taken << setprecision(4) << endl;
}

int main() {
    {
        auto start_timer = chrono::high_resolution_clock::now();
        ios_base::sync_with_stdio(false);

        auto end_timer = chrono::high_resolution_clock::now();

        double time_taken =
                chrono::duration_cast<chrono::nanoseconds>(end_timer - start_timer).count();

        time_taken *= 1e-9;
    }

    int decimalPlaces = 500000;

    cout << "Chudnovsky" << endl;
    {
        auto start_timer = chrono::high_resolution_clock::now();
        ios_base::sync_with_stdio(false);

        calculatePi_Chu(decimalPlaces);

        auto end_timer = chrono::high_resolution_clock::now();

        double time_taken =
                chrono::duration_cast<chrono::nanoseconds>(end_timer - start_timer).count();

        time_taken *= 1e-9;
        cout << " " << time_taken << setprecision(4) << endl;
    }

    cout << "BBP" << endl;
    {
        auto start_timer = chrono::high_resolution_clock::now();
        ios_base::sync_with_stdio(false);

        calculatePi_BBP(decimalPlaces);

        auto end_timer = chrono::high_resolution_clock::now();

        double time_taken =
                chrono::duration_cast<chrono::nanoseconds>(end_timer - start_timer).count();

        time_taken *= 1e-9;
        cout << " " << time_taken << setprecision(4) << endl;
    }

    cout << "Machin" << endl;
    {
        auto start_timer = chrono::high_resolution_clock::now();
        ios_base::sync_with_stdio(false);

        calculatePi_Mac(decimalPlaces);

        auto end_timer = chrono::high_resolution_clock::now();

        double time_taken =
                chrono::duration_cast<chrono::nanoseconds>(end_timer - start_timer).count();

        time_taken *= 1e-9;
        cout << " " << time_taken << setprecision(4) << endl;
    }
}