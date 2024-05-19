// exercise_7.1.cpp
#include <iostream>
double harmonic(double x, double y);            // Прототип функции

int main() {
    double a, b;
    std::cout << "Enter a pair of numbers: ";
    while ((std::cin >> a >> b) && a != 0 && b != 0) {
        double res = harmonic(a, b);
        std::cout << "The harmonic mean (" << a << ", " << b << ") = ";
        std::cout << res << std::endl;
    }
    std::cout << "\nDone. Bye!\n";
    return 0;
}

// Определение функции
double harmonic(double x, double y) {
    double h = 2.0 * x * y / (x + y);
    return h;
}