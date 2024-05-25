// exercise_7.5.cpp -- вычисление факториала с помощью рекурсивной функции
#include <iostream>
long double Factorial(unsigned num);

int main() {
    int a;
    long double res;
    std::cout << "Enter the number ('q' to quit): ";
    while (std::cin >> a) {
        res = Factorial(a);
        std::cout << "The factorial of the number " << a
                << " is " << res << std::endl;
        std::cout << std::endl << "Enter the next number: ";
    }
    std::cout << std::endl << "Bye!\n";
    return 0;
}

// Рекурсивная функция для вычисления факториала
long double Factorial(unsigned num) {
    if (num == 0 || num == 1)
        return 1;
    return num * Factorial(num - 1);
}