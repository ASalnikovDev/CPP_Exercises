// exercise_6.5.cpp
#include <iostream>
const float tax_1 = 1000.00;
const float tax_2 = 3000.00;

int main() {
    double income;
    double tax = 0.0;
    std::cout << "Enter your income: ";
    std::cin >> income;
    if (income > 35000)
        tax = (income - 35000) * 0.20 + tax_1 + tax_2;
    else if (income > 15000 && income <= 35000)
        tax = (income - 15000) * 0.15 + tax_1;
    else if (income > 5000 && income <= 15000)
        tax = (income - 5000) * 0.1;
    else
        tax = 0.0;
    std::cout << "Your tax to pay: " << tax << " twarps.\n";

}