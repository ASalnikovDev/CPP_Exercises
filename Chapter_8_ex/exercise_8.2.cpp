// exercise_8.2.cpp

#include <iostream>
#include <string>

struct CandyBar {
    std::string name;
    double weight;
    int energy_val;
};

// Прототипы функций
void set_val(CandyBar& st, std::string nm = "Millenium Munch", double wt = 2.85, int ev = 350.);      // установка значений
void show_val(const CandyBar& st);                                                                    // отображение элементов

int main() {
    CandyBar one;
    std::string str;                // переменная имени
    double wgt;                     // переменная веса
    int n;                          // переменная калорийности
        
    std::cout << "Enter the name of tne box ('q' to quit): ";
    std::getline(std::cin, str);
    if (str != "q") {
        std::cout << "Enter the weight: ";
        std::cin >> wgt;
        std::cout << "Enter the energy value: ";
        std::cin >> n;
        set_val(one, str, wgt, n);
    }

    else
        std::cout << "The input is completed." << std::endl;
        set_val(one);
    show_val(one);
}

// Запись значений членов структуры
void set_val(CandyBar& st, std::string nm, double wt, int ev) {
    st.name = nm;
    st.weight = wt;
    st.energy_val = ev;
}

// Отображение значений структуры
void show_val(const CandyBar& st) {
    std::cout << "\nBox" << std::endl;
    std::cout << "Name: " << st.name << std::endl;
    std::cout << "Weight: " << st.weight << std::endl;
    std::cout << "Energy value: " << st.energy_val << std::endl;
    std::cout << "Done." << std::endl;
}