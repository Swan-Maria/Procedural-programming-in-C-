// Задача 5.cpp : Реалізуйте переведення числа з рядка в int.
#include <iostream>
int myAtoi(const char* str);

int main()
{
    const int size = 50;
    char str[size];
    std::cout << "Enter a string: ";
    std::cin.getline(str, size);
    int number = myAtoi(str);
    std::cout << "Converted number: " << number << std::endl;
    return 0;
}

int myAtoi(const char* str) {
    int result = 0;
    int sign = 1;

    while (*str == ' ') {
        str++;
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
