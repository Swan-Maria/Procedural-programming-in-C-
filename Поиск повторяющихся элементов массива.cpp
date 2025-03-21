#include <iostream>
#include <time.h>

const int SIZE = 10;

int main()
{
	srand(time(NULL));

	int arr[SIZE];

	for (int i = 0; i < SIZE; ++i)
		arr[i] = rand() % 20 + 1;

	for (int i = 0; i < SIZE; ++i)
		std::cout << "arr[" << i << "] = " << arr[i] << '\n';

	int handled[SIZE]; // Массив для отслеживания уже обработанных значений
	int index = 0;

	std::cout << "\nRepeating elements:\n";

	for (int i = 0; i < SIZE; ++i)
	{
		int counter = 1; // Начинаем с 1, так как элемент уже есть в массиве
		bool alreadyHandled = false;

		// Проверяем, обрабатывали ли мы уже этот элемент
		for (int k = 0; k < index; ++k)
		{
			if (arr[i] == handled[k])
			{
				alreadyHandled = true;
				break;
			}
		}

		if (alreadyHandled)
			continue; // Если уже обработан, пропускаем

		// Подсчитываем количество повторений
		for (int j = i + 1; j < SIZE; ++j)
		{
			if (arr[i] == arr[j])
				counter++;
		}

		if (counter > 1)
		{
			std::cout << arr[i] << " (" << counter << ")\n";
			handled[index] = arr[i]; // Добавляем в список обработанных
			index++;
		}
	}
	return 0;
}
