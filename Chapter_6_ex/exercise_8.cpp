/*
    Напишите программу, которая открывает текстовый файл, читает его
    символ за символом до самого конца и сообщает количество символов 
    в файле.
*/

#include <iostream>
#include <fstream>              // поддержка файлового ввода-вывода
#include <string>
#include <cstdlib>              // поддержка exit()
#include <cctype>

int main() {
    int count = 0;
    char ch;
    std::string filename;
    std::ifstream inFile;       // объект для обработки файлового ввода
    std::cout << "Enter name of data file: ";
    getline(std::cin, filename);
    inFile.open(filename);
    if (!inFile.is_open()) {
        std::cout << "Could not open the file " << filename << std::endl;
        std::cout << "Program terminating.\n";
        exit(EXIT_FAILURE);
    }
    inFile.get(ch);
    while (inFile.good()) {             // пока ввод успешен
        if (isgraph(ch))                // любой печатаемый символ кроме пробела
            count++;
        inFile.get(ch);
    }
    if (inFile.eof())
        std::cout << "End of file reached.\n";
    std::cout << "Characters read: " << count << std::endl;
    return 0;
}