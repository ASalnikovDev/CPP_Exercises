// exercise_7.9.cpp

#include <iostream>
#include <cstring>

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
        std::cout << "\nStudent #" << (i + 1);
        display_1(ptr_stu[i]);
        display_2(&ptr_stu[i]);
    }
    display_3(ptr_stu, entered);
    delete [] ptr_stu;
    std::cout << "Done.\n";
    return 0;
}

// Функция запрашивает и сохраняет данные о студентах
// Ввод прекращается, либо после наполнения массива
// либо после ввода пустой строки (ENTER) в имени студента
int getinfo(student pa[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        std::cout << "\nStudent #" << (i + 1) << std::endl;
        std::cout << "Enter the student's name: ";
        std::cin.getline(pa[i].fullname, SLEN);
        int result = strcmp(pa[i].fullname, ""); 
        if (result == 0) {
            std::cout << "\nThe input is completed.\n";
            break;
        }
    std::cout << "Enter the student's hobby: ";
    std::cin.getline(pa[i].hobby, SLEN);
    std::cout << "Enter the student's OOP level: ";
    std::cin >> pa[i].ooplevel;
    std::cin.get();
    count++;
    }
    return count;
}

// Функция отображает содержимое структуры student
void display_1(student st) {
    std::cout << "\nFull name of the student: " << st.fullname << std::endl;
    std::cout << "Hobby of the student: " << st.hobby << std::endl;
    std::cout << "OOP level of the student: " << st.ooplevel << std::endl;
}

// Функция принимает адрес структуры student в качестве аргумента
// и отображает её содержимое
void display_2(const student *ps) {
    std::cout << "\nFull name of the student: " << ps->fullname << std::endl;
    std::cout << "Hobby of the student: " << ps->hobby << std::endl;
    std::cout << "OOP level of the student: " << ps->ooplevel << std::endl;
}

// display_3 принимает указатель на первый элемент массива структур
// student и количество элементов в этом массиве и оторбражает 
// содержимое всех структур в массиве
void display_3(const student pa[], int n) {
    for (int i = 0; i < n; i++) {
        std::cout << "\nStudent #" << (i + 1) << std::endl;
        std::cout << "\nFull name of the student: " << pa[i].fullname << std::endl;
        std::cout << "Hobby of the student: " << pa[i].hobby << std::endl;
        std::cout << "OOP level of the student: " << pa[i].ooplevel << std::endl;
    }
}