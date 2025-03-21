// Задача 1.cpp : Порахуйте кількість одиниць у довільному числі.
#include <iostream>

int counter(int n);

int main() {
    int n;
    std::cout << " Input number: ";
    std::cin >> n;

    int ones = counter(n);
    std::cout << " Number of ones: " << ones << std::endl;

    return 0;
}

int counter(int n) {
    int count = 0;
    while (n != 0) {
        if (n % 10 == 1) {
            count++;
        }
        n /= 10;
    }
    return count;
}