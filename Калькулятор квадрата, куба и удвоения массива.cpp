#include <iostream>
#include <time.h>

#define SIZE1 10
#define SIZE2 3

typedef int(*operation_t)(int);

int calculate(int x, operation_t op) { return op(x); }

int square(int x) { return x * x; }
int cube(int x) { return x * x * x; }
int doubling(int x) { return x * 2; }

int main()
{
    srand(time(NULL));

    int array_[SIZE1];
    std::cout << "\tARRAY\n";
    for (int i = 0; i < SIZE1; ++i)
    {
        array_[i] = rand() % 100 + 1;
        std::cout << i << ":    " << array_[i] << std::endl;
    }

    operation_t op_[SIZE2] = { square, cube, doubling };

    for (int i = 0; i < SIZE2; ++i)
    {
        if (i == 0)
            std::cout << "\tSQUERE" << std::endl;
        else if (i == 1)
            std::cout << "\tCUBE" << std::endl;
        else if (i == 2)
            std::cout << "\tDOUBLING" << std::endl;

        for (int j = 0; j < SIZE1; ++j)
        {
            std::cout << j << ":    " << calculate(array_[j], op_[i]) << std::endl;
        }
    }
    return 0;
}