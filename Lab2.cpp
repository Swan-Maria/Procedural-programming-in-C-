#include <iostream>
#include <time.h>
#include <Windows.h> //загаловок для підключення кирилиці 

#define SIZE 20

double  RandomValueInRange(double min, double max)
{
	//static_cast<double>(rand()) / (static_cast<double>(RAND_MAX / (max - min))) нормує значення випадкового числа в діапазоні від 0 до 3.
	//Коли це значення додається до min, результат буде в діапазоні від min до max. Тобто, підсумковий інтервал значень буде від - 2.0 до 1.0.
	return min + static_cast<double>(rand()) / (static_cast<double>(RAND_MAX / (max - min)));
}

int main()
{
	//підключаємо кирилицю
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	srand((time(NULL)));

	double arrX[SIZE]; //масив абсцис
	double arrY[SIZE]; //масив ординат
	bool arrTF[SIZE];  //масив належності або неналежності точок виділеній області

	for (int i = 0; i < SIZE; ++i)
	{
		double min = -2; //мінімальна межа значень абсцис і ординат точки (за графіком інтервали по кожній координаті співпадають)
		double max = 1;  //максимальна межа значень абсцис і ординат точки (за графіком інтервали по кожній координаті співпадають)

		arrX[i] = RandomValueInRange(min, max);
		arrY[i] = RandomValueInRange(min, max);	
	}

	for (int i = 0; i < SIZE; ++i)
	{
		//Щоб точка належела виділеній області, координати її точок, повині задовлільняти.
		// Або нерівності (х+1)(х+1) + у*у <= 1.
		// Або системі з трьох нерівностей: у<=0, x>=0, y>=2x-2.

		if ( ( (arrX[i] + 1) * (arrX[i] + 1) + arrY[i] * arrY[i] <= 1) || ( (arrY[i] <= 0) && (arrX[i] >= 0) && (arrY[i] >= 2 * arrX[i] - 2) ) )
			arrTF[i] = true;
		else
			arrTF[i] = false;
	}

	//Цикл, який виводить номер точки з її координатами і інформацією, чи належить точка області, чи ні.
	//Тернарний оператор перпевіряє значення i-го елемента масива типу bool: true/false.
	//Усі три цикла можна об'єднати в один, а виводити результат можна і у розгалужені if/else, де визначали елементи булувого масиву відповідно.
	for (int i = 0; i < SIZE; ++i)
	{
		std::cout<<" Точка M" << i + 1 << " (" << arrX[i]<<';'<<arrY[i]<<")"<< ((arrTF[i]==1)?" належить області\n":" НЕ належить області\n");
	}

	return 0;
}