#include <iostream>
#include <string>
#include <vector>
struct society {
    std::string name;
    double cost;
};

int main() {
    int num;
    std::cout << "Enter number of patrons: ";
    std::cin >> num;
    std::cin.get();
    std::vector<society> members(num);          // определение массива структур
    int major = 0;
    int minor = 0;
    
    // Модуль ввода информации 
    for (int i = 0; i < num; i++) {
        std::cout << "Enter the name of patron #" << i + 1 << ": ";
        getline(std::cin, members[i].name);
        std::cout << "Enter the donation #" << i + 1 << ": ";
        std::cin >> members[i].cost;
        std::cin.get();
        if (members[i].cost >= 10000)
            major++;
        else
            minor++;
    }

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