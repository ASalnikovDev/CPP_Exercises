#include <iostream>
#include <array>
const int ArSize = 10;

int main() {
    // Получения данных
    std::array <double, ArSize> donation;
    std::cout << "Please enter your donation.\n";
    std::cout << "You may enter up to " << ArSize
            << " donations <q to terminate>.\n";
    std::cout << "donation #1: ";
    int i = 0;
    while (i < ArSize && std::cin >> donation[i]) {
        if (++i < ArSize)
            std::cout << "donation #" << i + 1 << ": ";
    }

    // Вычисление среднего значения
    double av_value = 0.0;
    for (int j = 0; j < i; j++)
        av_value += donation[j];
    av_value = av_value / i;

    // Вычисление количества элементов в массиве
    // превышающих среднее значение
    int count = 0;
    for (int j = 0; j < i; j++)
    if (donation[j] > av_value)
        count++;

    // Вывод значений
    std::cout << "The average value of donations: "
            << av_value << std::endl;
    std::cout << "The number of values exceeding the average. "
            << count << std::endl;
    return 0;
}