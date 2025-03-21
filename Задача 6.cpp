// Задача 6.cpp : Реалізуйте підрахунок слів у реченні.
#include <iostream>
int countWords(const char* str);

int main()
{
    const int size = 100;
    char str[size];

    std::cout << "Enter a string: ";
    std::cin.getline(str, size); // Чтение строки с консоли

    int wordCount = countWords(str);
    std::cout << "Number of words: " << wordCount << std::endl;

    return 0;
}

int countWords(const char* str) {
    int count = 0;
    int state = 0;
    while (*str) {
        if (*str == ' ' || *str == '\n' || *str == '\t') {
            state = 0;
        }
        else if (state == 0) {
            state = 1;
            count++;
        }
        str++;
    }
    return count;
}