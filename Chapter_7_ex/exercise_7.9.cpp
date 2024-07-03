// exercise_7.9.cpp

#include <iostream>

// Констатные значения
const int SLEN = 30;

struct student {
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};

// Прототипы функций
int getinfo(student pa[], int n);                       // функция изменяет содержимое объекта
void display_1(student st);                             // функция отображает содержимое объекта
void display_2(const student *ps);                      // функция отображает содержимое объекта не меняя его
void display_3(const student pa[], int n);              // функция отображает содержимое объекта

int main() {
    std::cout << "Enter class size: ";
    int class_size = 0;
    std::cin >> class_size;
    while (std::cin.get() != '\n')
        continue;
    
    student *ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for (int i = 0; i < entered; i++) {
        display_1(ptr_stu[i]);
        display_2(&ptr_stu[i]);
    }
    display_3(ptr_stu, entered);
    delete [] ptr_stu;
    std::cout << "Done.\n";
    return 0;
}