#include <iostream>

int main()
{
    int number;
    std::cout << "Input number: ";
    std::cin >> number;
    int numberOfDigits = 1;
    int sum = 0;
    while (number / 10 != 0)
    {
        numberOfDigits++;
        int last_digit = number % 10;
        sum += last_digit;
        number /= 10;
    }
    sum += number;
    std::cout << "number of digits = " << numberOfDigits << '\n';
    std::cout << "sum of digits = " << sum << '\n';

    return 0;
}