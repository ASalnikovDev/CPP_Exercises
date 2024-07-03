// exercise_7.8.b.cpp

#include <iostream>

// Констатные значения
const int Seasons = 4;
const char Snames[][10] = {"Spring", "Summer", "Fall", "Winter"};

struct expenses
{
    double elem[Seasons];
};

// Прототипы функций
void fill(expenses *ar);                // изменение значений объекта
void show(const expenses *ar);          // показ элементов объекта

int main()
{
    expenses arr_exp;
    fill(&arr_exp);
    show(&arr_exp);
    return 0;
}

// Функция изменяет содержимое объекта
void fill(expenses *ar)
{
    double temp;
    for (int i = 0; i < Seasons; i++)
    {
        std::cout << "Enter " << Snames[i] << " expenses: ";
        std::cin >> temp;
        ar->elem[i] = temp;
    }
}

// Функция показывает содержимое объекта, но не изменяет его
void show(const expenses *ar)
{
    double total = 0.0;
    std::cout << "\nEXPENSES\n";
    for (int i= 0; i < Seasons; i++)
    {
        std::cout << Snames[i] << ": $" << ar->elem[i] << std::endl;
        total += ar->elem[i];
    }
    std::cout << "Total expenses: $" << total << std::endl;
}