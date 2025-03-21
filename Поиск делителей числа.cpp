/*Пользователь вводит с клавиатуры целое число.
Необходимо вывести на экран все числа, на которые
данное число делиться без остатка - его делители */

#include <iostream>

int main()
{
    int a;
    std::cout << "Input a:";
    std::cin >> a;

    std::cout << a << std::endl;;
    for (int i = a / 2; i > 1; --i)
    {
        if (a % i == 0)
            std::cout << i << '\n';
    }
    std::cout << "1\n";

    return 0;
}
