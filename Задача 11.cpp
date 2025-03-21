// Задача 11.cpp :	Напишіть функцію для пошуку унікального елемента в масиві.
#include <iostream>

int findUniqueElement(int* arr, int size);

int main() {
    int arr[] = { 1, 2, 2, 3, 3, 4, 4, 5, 5 };

    int uniqueElement = findUniqueElement(arr, 9);
    if (uniqueElement != -1) {
        std::cout << "Unique element: " << uniqueElement << std::endl;
    }
    else {
        std::cout << "No unique element found." << std::endl;
    }

    return 0;
}
int findUniqueElement(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        bool isUnique = true;
        for (int j = 0; j < size; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }
        if (isUnique) {
            return arr[i];
        }
    }
    return -1;
}