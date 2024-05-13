/*
Напишите предшественник программы, управляемой меню.
Она должна отображать меню из четырёх пунктов, каждый
из них помечен буквой. Если пользователь вводит букву,
отличающуюся от четырёх допустимых, программа должна повторно пригрлашать
его ввести правильное значение до тех пор, пока он этого не сделает.
Затем она должна выполнить некоторое простое действие на основе
пользовательского выбора.
*/

#include <iostream>
// Создание именованных костант
enum {carnivore = 'c', tree = 't', pianist = 'p', game = 'g'};

int main() {
    char choice;
    std::cout << "Please enter one of the following choices:\n"
            "c) carnivore       p) pianist\n"
            "t) tree            g) game\n";
    do {
        std::cin >> choice;
        std::cout << std::endl;
        switch (choice) {
            case carnivore: std::cout << "A maple is a carnivore.\n";
                break;
            case tree: std::cout << "A maple is a tree.\n";
                break;
            case pianist: std::cout << "A maple is a pianist.\n";
                break;
            case game: std::cout << "A maple is a game.\n";
                break;
            default: std::cout << "Please enter a c, p, t or g: ";
        } 
    } while (choice != carnivore && choice != tree && choice != pianist && choice != game);
    return 0;
}