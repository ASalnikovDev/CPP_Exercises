// exercise_7.10.cpp

#include <iostream>
double add_1(double a, double b);
double add_2(double a, double b);
double add_3(double a, double b);
double add_4(double a, double b);
double calculate(double a, double b, double (*pa)(double, double));


int main() {
    double (*pf[4])(double, double) = {add_1, add_2, add_3, add_4};
    double x, y, res;
    std::cout << "Enter a number x: ";
    std::cin >> x;
    std::cout << "Enter a number y: ";
    std::cin >> y;
    for (int i = 0; i < 4; i++) {
        res = calculate(x, y, (*pf[i]));
        std::cout << "\nResultat #" << (i + 1) << " is : " << res << std::endl;
    }
    std::cout << "Done.\n";
    return 0;
}



double add_1(double a, double b) {
    return a + b;
}

double add_2(double a, double b) {
    return a - b;
}

double add_3(double a, double b) {
    return a * b;
}

double add_4(double a, double b) {
    return a / b;
}

double calculate(double a, double b, double (*pa)(double, double)) {
    return (*pa)(a, b);
}
