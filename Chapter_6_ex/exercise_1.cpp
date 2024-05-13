/*
Напишите программу, которая читает клавиатурный ввод до символа '@'
и повторяет его, за исключением десятичных цифр, преобразуя каждую букву 
верхнего регистра в букву нижнего регистра и наоборот. (Не забудьте о
семействе функций cctype.)
*/

#include <iostream>
#include <cctype>

int main() {
    char ch;
    std::cout << "Enter the text <@ to quit>:\n";
    std::cin.get(ch);
    while (ch != '@') {
        if (isalpha(ch)) {                  
            ch = ('a' <= ch && ch <= 'z') ? toupper(ch) : tolower(ch);
            std::cout << ch;
        }
        else if (isspace(ch))
            std::cout << ch;
        std::cin.get(ch);
    }
    std::cout << std::endl;
    return 0;
}
