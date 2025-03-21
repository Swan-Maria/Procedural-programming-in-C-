#include <iostream>
#include <time.h>

#define ROUNDS 5

void printResult(int value)
{
    std::cout << "Points number: " << value << "\n";
}

int main() 
{
    srand((time(NULL)));

    int sum1 = 0;
    int sum2 = 0;

    int firstGo=rand()%2+1;
    if (firstGo == 1)
        std::cout << "You throws first!\n";
    else
        std::cout << "Computer throws first!\n";


    for (int i = 1; i <= ROUNDS; ++i) 
    {
        std::cout << "\n    Round  " << i << "\n\n";
        if (firstGo == 1) 
        {
            std::cout << "You:\n";
            int result1 = rand() % 6 + 1;
            int result2 = rand() % 6 + 1;
            printResult(result1);
            printResult(result2);
            sum1 += result1 + result2;

            std::cout << "\nComputer:\n";
            result1 = rand() % 6 + 1;
            result2 = rand() % 6 + 1;
            printResult(result1);
            printResult(result2);
            sum2 += result1 + result2;
        }
        else 
        {
            std::cout << "Computer:\n";
            int result1 = rand() % 6 + 1;
            int result2 = rand() % 6 + 1;
            printResult(result1);
            printResult(result2);
            sum2 += result1 + result2;

            std::cout << "\nHuman:\n";
            result1 = rand() % 6 + 1;
            result2 = rand() % 6 + 1;
            printResult(result1);
            printResult(result2);
            sum1 += result1 + result2;
        }
    }

    std::cout << "\n    Game result:\n";
    std::cout << "\nYour points: " << sum1 << "\n";
    std::cout << "Computer points: " << sum2 << "\n";

    if (sum1 > sum2) {
        std::cout << "\nWinner is gamer 1\n";
    }
    else if (sum1 == sum2) {
        std::cout << "\nIt's a draw!\n";
    }
    else {
        std::cout << "\nWinner is gamer 2\n";
    }

    double humanAvarege = static_cast<double>(sum1) / ROUNDS;
    double computerAvarege = static_cast<double>(sum2) / ROUNDS;

    std::cout << "\nAverage your points: " << humanAvarege<< "\n";
    std::cout << "Average computer points: " << computerAvarege << "\n";

    return 0;
}
