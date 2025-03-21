// Задача 4.cpp : Реалізуйте реверс рядків.
#include <iostream>
using namespace std;

void reverseString(char* str);

int main() {
    const int size = 50;
    char str[size];
    cout << "Enter a string: ";
    cin.getline(str, size);
    reverseString(str);
    cout << "Reversed string: " << str << endl;

    return 0;
}

void reverseString(char* str) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}
