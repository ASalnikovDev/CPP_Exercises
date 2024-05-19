// exercise_7.2.cpp
// Для прекращения ввода значений ввести отрицательное число
// или символ. Максимальное количество значений - 10

#include <iostream>
const int ArSize = 10;                          // Максимальное количество значений
int real_size;
// Прототипы функций
int inscore(double arr[], int limit);
void show_result(const double arr[], int size);
double average_value(const double arr[], int size);

int main() {
    double scores[ArSize] = {0};                // Инициализируем массив нулями
    real_size = inscore(scores, ArSize);
    show_result(scores, real_size);
    double res = average_value(scores, real_size);
    std::cout << "\nAverage result: " << res << std::endl;
    return 0;
}

// Определение функции ввода значений
int inscore(double arr[], int limit) {
    double temp;
    int i;
    for (i = 0; i < limit; i++) {
        std::cout << "Enter value #" << (i + 1) << ": ";
        std::cin >> temp;
        if (!(std::cin)) {
            std::cin.clear();
            while (std::cin.get() != '\n')
                continue;
            std::cout << "Bad input; input process terminated.\n";
            break;
        }
        else if (temp < 0)
            break;
        arr[i] = temp;
    }
    return i;
}

// Определение функции вывода результатов
void show_result(const double arr[], int size) {
    std::cout << "\nGame results: ";
    for (int i = 0; i < size; i++)
        std::cout << arr[i] << ", ";
    std::cout << "\b\b; \n";
}

// Определение функции вычисления среднего результата
double average_value(const double arr[], int size) {
    double sum = 0.0;
    double a_value;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    a_value = sum / size;
    return a_value;
}