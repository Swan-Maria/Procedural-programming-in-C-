// Задача 10.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
#include <iostream>

bool isPalindrome(const char* str);

int main() {
    char str[100];
    std::cout << "Enter a word: ";
    std::cin >> str;

    if (isPalindrome(str)) {
        std::cout << str << " is a palindrome." << std::endl;
    }
    else {
        std::cout << str << " is not a palindrome." << std::endl;
    }

    return 0;
}

bool isPalindrome(const char* str) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }

    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return false;
        }
    }
    return true;
}
