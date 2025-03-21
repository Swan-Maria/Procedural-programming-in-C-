#include <iostream>
#include <cstdlib>
#include <ctime>

// Функція для зміни місцями елементів з парними та непарними індексами
void swapEvenOddIndices(int arr[], int size) {
    for (int i = 0; i < size - 1; i += 2) {  // Проходимо по масиву з кроком 2
        std::swap(arr[i], arr[i + 1]);    // Міняємо місцями елементи з парними та непарними індексами
    }
}

// Функція для заповнення масиву випадковими числами
void randArray(int arr[], int size) {
    std::srand(std::time(0));  // Ініціалізація генератора випадкових чисел поточним часом
    for (int i = 0; i < size; ++i) {  // Проходимо по всіх елементах масиву
        arr[i] = std::rand() % 100;  // Заповнюємо масив випадковими числами від 0 до 99
    }
}

// Функція для виведення масиву на екран
void printArray(const int arr[], int size) {
    for (int i = 0; i < size; ++i) {  // Проходимо по всіх елементах масиву
        std::cout << arr[i] << " ";  // Виводимо кожен елемент масиву
    }
    std::cout << std::endl;  // Перехід на новий рядок після виведення всього масиву
}

int main()
{
    const int size = 10;  // Визначаємо розмір масиву
    int arr[size];  // Оголошуємо масив
    
    randArray(arr, size);  // Заповнюємо масив випадковими числами
    std::cout << "Original array: ";  // Виводимо повідомлення
    printArray(arr, size);  // Виводимо початковий масив

    swapEvenOddIndices(arr, size);  // Міняємо місцями елементи з парними та непарними індексами
    std::cout << "Array after swapping even and odd indices: ";  // Виводимо повідомлення
    printArray(arr, size);  // Виводимо змінений масив

    return 0;
}