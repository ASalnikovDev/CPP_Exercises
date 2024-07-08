// exercise_8.3.cpp

#include <iostream>
#include <string>
#include <cctype>

// Прототипы функций
void change_string(std::string& st);

int main() {
    std::string str_1;
    std::cout << "Enter a string (q to quit): ";
    std::getline(std::cin, str_1);
    while (str_1 != "q" ) {
        change_string(str_1);
        std::cout << str_1 << std::endl;
        std::cout << "Next string (q to quit): ";
        std::getline(std::cin, str_1);
    }
    std::cout << "\nBye." << std::endl;
    return 0;
}

// Функция преобразует символы нижнего регистра в символы верхнего регистра
void change_string(std::string& st) {
    int len = st.size();
    for (int i = 0; i < len; i++) {
        if (isalpha(st[i]) && islower(st[i]))
            st[i] = toupper(st[i]);
    }
}