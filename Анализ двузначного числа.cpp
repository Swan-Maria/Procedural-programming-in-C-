#include <iostream>

int main()
{
    int number_of_digits = 0;
    int sum_of_digits = 0;
    int number;
    std::cout<<"Input number = \n";
    std::cin>> number;
    if (number < 10)
    {
        number_of_digits = 1;
        sum_of_digits = number;

    }
    else
    {
        number_of_digits = 2;
        sum_of_digits = number / 10 + number % 10;
    }
    std::cout << "\nnumber_of_digits: "<<number_of_digits<<std::endl;
    std::cout << "sum_of_digits: "<<sum_of_digits<<std::endl;
    return 0;
}
