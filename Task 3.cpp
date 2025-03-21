#include <iostream>

// Функція для обчислення НСД за допомогою алгоритму Евкліда
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int a, b;
    std::cout << "Enter two integers:\na: ";
    std::cin >> a;
    std::cout << "b: ";
    std::cin >> b;

    int result = gcd(a, b);
    std::cout << "GCD of " << a << " and " << b << " is " << result << std::endl;

    return 0;
}