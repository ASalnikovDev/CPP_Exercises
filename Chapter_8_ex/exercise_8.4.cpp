// exercise_8.4.cpp
// В данном решении отсутствует операция delete, но таково условие задачи
// увы я не нашёл адекватного решения этого вопроса без изменения main()

#include <iostream>
#include <cstring>                          // для strlen(), strcpy()

struct stringy {
    char* str;                              // указывает на строку
    int ct;                                 // длина строки (не считая символа '\0')
};

// Здесь размещаются прототипы функций set() и show()
void set(stringy& st, const char* cstr);
void show(const stringy& st, int n = 1);
void show(const char* cstr, int n = 1);

int main() {
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";
    set(beany, testing);  // первым аргументом является ссылка,
    // выделяет пространство для хранения копии testing,
    // использует элемент типа str структуры beany как указатель
    // на новый блок, копирует testing в новый блок и 
    // создаёт элемент ct структуры beany

    show(beany);            // выводит строковый член структуры один раз
    show(beany, 2);         // выводит строковый член структуры два раза
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);          // выводит строку testing один раз
    show(testing, 3);       // выводит строку testing три раза
    show("Done!");
    return 0;
}

void set(stringy& st, const char* cstr) {
    int len = strlen(cstr);
    st.ct = len;
    st.str = new char[st.ct + 1];
    strcpy(st.str, cstr);
}

void show(const stringy& st, int n) {
    std::cout << "Show string member of the structure " << n << " times." << std::endl;
    for (int i = 0; i < n; i++)
        std::cout << (i + 1) << ". " << st.str << std::endl;
}

void show(const char* cstr, int n) {
    std::cout << "Show some string " << n << " times." << std::endl;
    for (int i = 0; i < n; i++)
        std::cout << (i + 1) << ". " << cstr << std::endl;
}