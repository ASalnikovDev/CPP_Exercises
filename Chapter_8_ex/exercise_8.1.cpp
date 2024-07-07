// exercise_8.1.cpp

#include <iostream>
#include <string>

// Определяем констатные значения
const int Times = 5;                        // Количество вызовов функции

int counter = 0;                            // счётчик вызова функции

// Прототип функции
void show_line(const std::string* st, int n = 0);

int main() {
    std::string str_1;
    std::cout << "Enter a text: ";
    std::getline(std::cin, str_1);
    for (int i = 0; i < Times; ++i) {
        show_line(&str_1);               // второй параметр задан оп умолчанию, можно изменить
        counter++;
    }
    std::cout << "\nDone." << std::endl;
    return 0;
}

// Печатает содержимое строки
void show_line(const std::string* st, int n) {
    if (n != 0) 
        for (int i = 0; i < counter; i++)
            std::cout << *st << std::endl;
    else 
        std::cout << *st << std::endl;
}