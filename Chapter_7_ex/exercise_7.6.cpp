// exercise_7.6.cpp
#include <iostream>
const int ArSize = 10;
int Fill_array(double ar[], int limit);
void Show_array(double ar[], int Size);
void Reverse_array(double ar[], int Size);

int main() {
    double values[ArSize] = {0};
    int real_size;
    std::cout << "Fill the array\n";
    real_size = Fill_array(values, ArSize);
    std::cout << "The array looks like this:\n";
    Show_array(values, real_size);
    std::cout << "\nMake reverse\n";
    Reverse_array(values, real_size);
    std::cout << "\nAnd now the array looks:\n";
    Show_array(values, real_size);
    return 0;
}

// Функция ввода исходных данных в массив
int Fill_array(double ar[], int limit) {
    double temp;
    int i;
    for (i = 0; i < limit; i++) {
        std::cout << "Enter value #" << i + 1 << ": ";
        std::cin >> temp;
        if (!std::cin) {
            std::cin.clear();
            while (std::cin.get() != '\n')
                continue;
            std::cout << "The input is finished.\n";
            break;
        }
        ar[i] = temp;
    }
    return i;
}

// Функция отображения содержимого массива
void Show_array(double ar[], int Size) {
    std::cout << "\nValues of array\n";
    for (int i = 0; i < Size; i++)
        std::cout << "Value #" << i + 1 << ": "
                << ar[i] << std::endl;
}

// Функция изменения порядка элементов массива
void Reverse_array(double ar[], int Size) {
    double temp;
    int i;
    int n = Size - 1;
    for (i = 0; i < n; i++, n--) {
        temp = ar[i];
        ar[i] = ar[n];
        ar[n] = temp;
    }
}