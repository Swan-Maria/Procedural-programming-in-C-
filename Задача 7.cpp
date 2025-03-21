// Задача 7.cpp :	Реалізуйте підрахунок чисел Фібоначчі.
#include <iostream>

int fibonacci(int n);

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    int result = fibonacci(n);
    std::cout << "Fibonacci number for n = " << n << " is: " << result << std::endl;

    return 0;
}

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    int a = 0, b = 1;
    for (int i = 2; i <= n; i++) {
        int temp = a;
        a = b;
        b = temp + b;
    }
    return b;
}
