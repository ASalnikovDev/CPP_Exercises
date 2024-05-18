#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <cstdlib>
struct society {
    std::string name;
    double cost;
};

int main() {
    int num;
    std::string filename;
    std::ifstream inFile;
    std::cout << "Enter name of data file: ";
    std::cin >> filename;
    inFile.open(filename);

    // Проверяем открыт ли файл
    if (!inFile.is_open()) {
        std::cout << "Could not open the file " << filename << std::endl;
        std::cout << "Program terminating.\n";
        exit(EXIT_FAILURE);
    }
    inFile >> num;                              // считываем количество членов
    inFile.get();
    std::vector<society> members(num);          // определение массива структур
    int major = 0;
    int minor = 0;
        
    // Модуль ввода информации 
    for (int i = 0; i < num; i++) {
        getline(inFile, members[i].name);        // считывание имени        
        inFile >> members[i].cost;        // считывание взноса
        inFile.get();
        if (members[i].cost >= 10000)
            major++;
        else
            minor++;
    }

    // Информация об окончании ввода
    if (inFile.eof())
        std::cout << "End of file reached.\n";                  // достижение конца файла
    else if (inFile.fail()) 
        std::cout << "Input terminated by data mismatch.\n";    // несоответствие типа данных
    else
        std::cout << "Input terminated by unknown reason.\n";   // неизвестная причина

    // Модуль обработки и вывода информации
    std::cout << "\nGrand Patrons\n";
    if (major > 0) {
        for (int i = 0; i < num; i++) 
            if (members[i].cost >= 10000)
               std::cout << members[i].name << " - $" << members[i].cost << std::endl;
    }
    else
        std::cout << "none\n";
    std::cout << "\nPatrons\n";
    if (minor > 0) {
        for (int i = 0; i < num; i++)
            if (members[i].cost < 10000)
                std::cout << members[i].name << " - $" << members[i].cost <<std::endl;
    }
    else
        std::cout << "none\n";
    return 0;
    
}