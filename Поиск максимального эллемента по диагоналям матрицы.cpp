#include <iostream>
#include <time.h>

#define SIZE 10

const int SIZE_ = 10;

int main()
{
	srand(time(NULL));

	int matrix[SIZE][SIZE];

	for (int i = 0; i < SIZE; ++i)
	{
		for (int j = 0; j < SIZE; ++j)
		{
			matrix[i][j] = rand() % 100 + 1;
		}
	}

	for (int i = 0; i < SIZE; ++i)
	{
		for (int j = 0; j < SIZE; ++j)
		{
			std::cout << matrix[i][j] << "     ";
		}
		std::cout << '\n';
	}

	//TOP - главная диагональ

	int max_top = matrix[0][0];
	for (int i = 0; i < SIZE; ++i)
	{
		for (int j = i; j < SIZE; ++j)
		{
			if (matrix[i][j] > max_top)
			{
				max_top = matrix[i][j];
			}
		}
	}
	std::cout << "\n\nmax_top=" << max_top;

	//GROUND - главная диагональ

	int max_ground = matrix[0][0];
	for (int i = 0; i < SIZE; ++i)
	{
		for (int j = 0; j <= i; ++j)
		{
			if (matrix[i][j] > max_ground)
			{
				max_ground = matrix[i][j];
			}
		}
	}
	std::cout << "\n\nmax_ground=" << max_ground;

	//TOP - побочная диагональ

	int max_top_ = matrix[0][0];
	for (int i = 0; i < SIZE; ++i)
	{
		for (int j = 0; j <= SIZE - i; ++j)
		{
			if (matrix[i][j] > max_top_)
			{
				max_top_ = matrix[i][j];
			}
		}
	}
	std::cout << "\n\nmax_top_=" << max_top_;
	//GROUND - побочная диагональ

	int max_ground_ = matrix[0][0];
	for (int i = 0; i < SIZE; ++i)
	{
		for (int j = SIZE - i; j < SIZE; ++j)
		{
			if (matrix[i][j] > max_ground_)
			{
				max_ground_ = matrix[i][j];
			}
		}
	}
	std::cout << "\n\nmax_ground_=" << max_ground_;
	return 0;
}