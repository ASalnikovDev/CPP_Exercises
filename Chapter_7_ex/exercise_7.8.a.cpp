// exercise_7.8.a.cpp

#include <iostream>

// Констатные значения
const int Seasons = 4;
const char Snames[][10] = {"Spring", "Summer", "Fall", "Winter"};

// Прототипы функций
void fill(double *ar, int sz);                  // наполнение объекта значениями
void show(const double *ar, int sz);            // отображение информации хранящейся в объекте

int main()
{
    double expenses[Seasons];
    fill(expenses, Seasons);
    show(expenses, Seasons);
    return 0;
}

// Функция изменяет содержимое массива
void fill(double *ar, int sz)
{
    double *ptr;
    double temp;
    ptr = ar;
    for (int i = 0; i < sz; i++)
    {
        std::cout << "Enter " << Snames[i] << " expenses: ";
        std::cin >> temp;
        *ptr = temp;
        ptr++;
    }
}

// Функция показывает содержимое объекта, но не изменяет его
void show(const double *ar, int sz)
{
    double total = 0.0;
    const double *ptr;
    ptr = ar;
    std::cout << "\nEXPENSES\n";
    for (int i = 0; i < sz; i++)
    {
        std::cout << Snames[i] << ": $" << *ptr << std::endl;
        total += *ptr;
        ptr++;
    }
    std::cout << "Total expenses: $" << total << std::endl;
}