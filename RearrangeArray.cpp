#include <iostream>
#include <time.h>
#include <Windows.h>
const int size = 20;
void creatArray(int* arr);
void printArray(int* arr);
void rearrangeArray(int* arr, int size);

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));
    int arr[size];
    creatArray(arr);
    std::cout << "До преобразования:   ";
    printArray(arr);
    rearrangeArray(arr, size);
    std::cout << "После преобразования: ";
    printArray(arr);
    return 0;
}

void printArray(int* arr) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << "  ";
    }
    std::cout << std::endl;
}
void creatArray(int* arr) {
    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % size - size / 2;
    }
}
void rearrangeArray(int* arr, int size) {
    int posIndex = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] >= 0) {
            std::swap(arr[posIndex], arr[i]);
            posIndex++;
        }
    }
}
