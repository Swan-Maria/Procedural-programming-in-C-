#include <iostream>

int main ()
{
int number;
std::cout << "Input number: ";
std::cin >> number;
int numberOfDigits = 1;
while (number / 10 != 0)
{
    numberOfDigits++;
    number /= 10;
}
std::cout << "number of digits = " << numberOfDigits << '\n';

return 0;
}