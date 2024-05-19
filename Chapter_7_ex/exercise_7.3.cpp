// exercise_7.3.cpp

#include <iostream>
struct box {
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};
// Прототипы функций
void show_struct(const box name_struct);
void change_volume(box *name_struct);

int main() {
    box box_1 = {"Yandex", 1.0, 10.0, 40.0, 300.0};
    std::cout << "Now the structure looks like this:\n";
    show_struct(box_1);
    std::cout << "\nThen change the volume.\n";
    change_volume(&box_1);
    std::cout << "And now the structure looks:\n";
    show_struct(box_1);
    return 0;
}

// Функция вывода
void show_struct(const box name_struct) {
    std::cout << "Display values of the structure:\n";
    std::cout << "Name of maker: " << name_struct.maker << std::endl;
    std::cout << "Height id: " << name_struct.height << std::endl;
    std::cout << "Width is: " << name_struct.width << std::endl;
    std::cout << "Length is: " << name_struct.length << std::endl;
    std::cout << "Volume is: " << name_struct.volume << std::endl;
}

// Функция изменения члена volume
void change_volume(box *name_struct) {
    float temp;
    temp = name_struct->height * name_struct->width * name_struct->length;
    name_struct->volume = temp;
}