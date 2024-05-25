// exercise_7.4.cpp -- расчёт шанса выигрыша в лотерее
#include <iostream>
long double probability(unsigned numbers, unsigned picks, unsigned meganumber);

int main() {
    double range_1, range_2, choices;
    // Процедура ввода исходных данных
    std::cout << "Enter the total number of the range one on the game card: ";
    std::cin >> range_1;
    std::cout << "Enter the number of picks allowed in the range one: ";
    std::cin >> choices;
    std::cout << "Enter the total number of the range two (meganumber) on the game card: ";
    std::cin >> range_2;
    long double res = probability(range_1, choices, range_2);
    std::cout << "You have one chance in ";
    std::cout << res << " of winning.\n";
    std::cout << std::endl << "Bye!\n";
    return 0;
}

// Следующая функция вычисляет вероятность выигрыша в лотерее
long double probability(unsigned numbers, unsigned picks, unsigned meganumber) {
    long double result = 1.0;
    unsigned n, p;
    for (n = numbers, p = picks; p > 0; n--, p--)
        result *= (n / p);
    result *= meganumber;
    return result;
}