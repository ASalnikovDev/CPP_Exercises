// exercise_7.7.cpp

#include <iostream>
const int Max = 5;

// Прототипы функций
int fill_array(double *begin, double *end);
void show_array(const double *begin, const double *end);
void revalue(double r, double *begin, double *end);

int main()
{
    double properties[Max];
    int size = fill_array(properties, properties + Max);
    show_array(properties, properties + size);
    if (size > 0)
    {
        std::cout << "Enter revaluation factor: ";
        double factor;
        while (!(std::cin >> factor))                                   // неверный ввод
        {
            std::cin.clear();
            while (std::cin.get() != '\n')
                continue;
            std::cout << "Bad input; Please enter a number: ";          // повторный запрос на ввод числа
        }
        revalue(factor, properties, properties + size);
        show_array(properties, properties + size);
    }
    std::cout << "Done.\n";
    std::cin.get();
    std::cin.get();
    return 0;
}

// Функция добавляет элементы в массив
int fill_array(double *begin, double *end)
{
    double temp;
    int i = 0;
    double *ptr;
    for (ptr = begin; ptr != end; ptr++)
    {
        std::cout << "Enter value #" << (i + 1) << ": ";
        std::cin >> temp;
        if (!std::cin)
        {
            std::cin.clear();
            while (std::cin.get() != '\n')
                continue;
            std::cout << "Bad input; input process terminated.\n";
            break;
        }
        else if (temp < 0)
            break;
        *ptr = temp;
        i++;
    }
    return i;
}

// Функция показывает элементы массива
// может использовать, но не изменять элементы массива
void show_array(const double *begin, const double *end)
{
    int i = 0;
    const double *ptr;
    for (ptr = begin; ptr != end; ptr++)
    {
        std::cout << "Property #" << (i + 1) << ": $";
        std::cout << *ptr << std::endl;
        i++;
    }
}

// Функция умножает на r каждый элемент массива
void revalue(double r, double *begin, double *end)
{
    double *ptr;
    for (ptr = begin; ptr != end; ptr++)
        *ptr *= r;
}