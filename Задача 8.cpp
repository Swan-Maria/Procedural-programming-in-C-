// Задача 8.cpp : Знайдіть такі елементи двох масивів, які трапляються тільки в кожному з них.
#include <iostream>

void findUniqueElements(char* arr1, char* arr2);

int main() {
    const int size = 20;
    char str1[size];
    std::cout << "Enter a string 1: ";
    std::cin.getline(str1, size); 

    char str2[size];
    std::cout << "Enter a string 2: ";
    std::cin.getline(str2, size);

    findUniqueElements(str1, str2);

    return 0;
}

void findUniqueElements(char* arr1, char* arr2) {
    bool found;

    int size1 = 0;
    while (arr1[size1] != '\0') {
        size1++;
    }

    int size2 = 0;
    while (arr2[size2] != '\0') {
        size2++;
    }

    std::cout << "Unique elements in arr1: ";
    for (int i = 0; i < size1; i++) {
        found = false;
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            std::cout << arr1[i] << " ";
        }
    }

    std::cout << "\nUnique elements in arr2: ";
    for (int i = 0; i < size2; i++) {
        found = false;
        for (int j = 0; j < size1; j++) {
            if (arr2[i] == arr1[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            std::cout << arr2[i] << " ";
        }
    }
    std::cout << std::endl;
}