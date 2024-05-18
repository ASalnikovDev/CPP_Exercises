#include <iostream>
#include <cctype>
#include <string>
const int WordSize = 20;

int main() {
    std::string word;                // определение символьного массива для ввода слова
    int vowels = 0;                     // счётчик слов начинающихся с гласных
    int consonants = 0;                 // счётчик слов начинающихся с согласных
    int others = 0;                     // счётчик других слов
    int count = 0;                      // счётчик всех слов

    // Модуль ввода и обработки данных
    std::cout << "Enter words (q to quit): \n";
    std::cin >> word;
    while (word.size() > 1 || word[0] != 'q') {
        count++;
        if (isalpha(word[0])) {
            switch (word[0]) {
                case 'A':
                case 'a':
                case 'O':
                case 'o':
                case 'E':
                case 'e':
                case 'I':
                case 'i':
                case 'U':
                case 'u':
                case 'Y':
                case 'y': vowels++;
            }
        }
        else 
            others++; 
        std::cin >> word;
    }
    consonants = count - vowels - others;

    // Модуль вывода 
    std::cout << vowels << " words begining with vowels\n";
    std::cout << consonants << " words begining with consonants\n";
    std::cout << others << " others\n";
    return 0;
}