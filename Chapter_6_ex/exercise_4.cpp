/*
Когда вы вступите в Благотворительный Орден Программистов (БОП),
к вам могут обращаться на заседаниях БОП по вашему реальному имени, 
по должности либо секретному имени БОП. Напишите программу, которая
может выводить списки членов по реальным именам, должностям,
секретным именам либо по предпочтению самого члена.
*/

#include <iostream>
#include <string>
#include <vector>
const int ArSize = 5;
// Структура имён Благотворительного Ордена Программистов (БОП)
struct bop {
    std::string fullname;                   // реальное имя
    std::string title;                      // должность
    std::string bopname;                    // секретное имя БОП
    int preference;                         // 0 - реальное имя, 1 - должность, 2 - секкретное имя БОП 
};

int main() {
    
    std::vector<bop> members = {
        {"Wimp Macho", "Director", "WMacho", 0},
        {"Raki Rhodes", "Junior Dev", "RRhodes", 1},
        {"Celia Laiter", "Senior Dev", "CLaiter", 1},
        {"Hoppy Hipman", "Tester", "HHipman", 2},
        {"Pat Hand", "Analisys", "PHand", 2}
    };

    std::cout << "Benevolent Order of Programmers Report\n"
            "a. display by name             b. display by title\n"
            "c. display by bopname          d. display by preference\n"
            "q. quit\n";
    std::cout << "Enter your choice: ";
    char choice;
    
    do {
        std::cin >> choice;
        switch (choice) {
            case 'a': 
                for (short i = 0; i < ArSize; i++) 
                    std::cout << members[i].fullname << std::endl;
                std::cout << "Next choice: ";
                break;
            case 'b':
                for (short i = 0; i < ArSize; i++)
                    std::cout << members[i].title << std::endl;
                std::cout << "Next choice: ";
                break;
            case 'c':
                for (short i = 0; i < ArSize; i++)
                    std::cout << members[i].bopname << std::endl;
                std::cout << "Next choice: ";
                break;
            case 'd':
                for (short i = 0; i < ArSize; i++) 
                    switch (members[i].preference) {
                        case 0:
                            std::cout << members[i].fullname << std::endl;
                            break;
                        case 1:
                            std::cout << members[i].title << std::endl;
                            break;
                        case 2: 
                            std::cout << members[i].bopname << std::endl;
                            break;
                    }
                std::cout << "Next choice: ";
                break;
            case 'q': std::cout << "Bye!" << std::endl; 
                break;
            default: std::cout << "Please enter a, b, c, d or q: ";
            }
            
            
    } while (choice != 'q');
    return 0;
}