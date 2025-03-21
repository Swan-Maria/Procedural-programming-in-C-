// Задача 2.cpp : Напишіть реалізацію функції int atoi(const char *str); перетворення рядка в число.
#include <iostream>

int myAtoi(const char* str);

int main() {
    const int size = 100;
    char str[size];

    std::cout << "Enter a string: ";
    std::cin.getline(str, size); // Чтение строки с консоли

    int number = myAtoi(str);
    std::cout << "Converted number: " << number << std::endl;

    return 0;
}

int myAtoi(const char* str) {
    int result = 0;
    int sign = 1;

    while (*str == ' ') {
        str++; // Пропускаем пробелы
    }

    if (*str == '-' || *str == '+') {
        sign = (*str == '-') ? -1 : 1;
        str++;
    }

    while (*str >= '0' && *str <= '9') {
        result = result * 10 + (*str - '0');
        str++;
    }
    return result * sign;
}