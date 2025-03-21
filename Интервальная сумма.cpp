#include <iostream>
#include <time.h>

typedef int (*find_t)(int*, int);

void PrintArray(int* arr, int size);

int FindIndex(int* arr, size_t size, find_t action);

int AddElementsBetweenIndexes(int* arr, int firstNullIndex, int lastNullIndex);

int FindFirstNullIndex(int* arr, int size);

int FindLastNullIndex(int* arr, int size);

const int SIZE = 50;
int main()
{
	srand(time(NULL));

	int inputArray[SIZE];
	for (int i = 0; i < SIZE; ++i) {
		inputArray[i] = rand() % 11;
	}
	PrintArray(inputArray, SIZE);

	int firstNullIndex = FindIndex(inputArray, SIZE, FindFirstNullIndex);
	int lastNullIndex = FindIndex(inputArray, SIZE, FindLastNullIndex);

	int add = AddElementsBetweenIndexes(inputArray, firstNullIndex, lastNullIndex);

	if (firstNullIndex != -1 && lastNullIndex != -1 && firstNullIndex < lastNullIndex) { 
		int add = AddElementsBetweenIndexes(inputArray, firstNullIndex, lastNullIndex); 
		std::cout << "first null index: " << firstNullIndex << '\n' << "last null index: " << lastNullIndex << '\n';
		std::cout << "Sum of array elements between first and last zero value: " << add << '\n'; 
	}
	else {
		std::cout << "Invalid indices for summation.\n"; 
	}
	return 0;
}
int FindIndex(int* arr, size_t size, find_t action)
{
	return action(arr, size);
}
//----------------------------------------------------------------
void PrintArray(int* arr, int size)
{
	for (int i = 0; i < size; ++i)
		std::cout << arr[i] << "    ";
	std::cout << '\n';
}

//----------------------------------------------------------------
int AddElementsBetweenIndexes(int* arr, int firstNullIndex, int lastNullIndex)
{
	int result = 0;
	for (int i = firstNullIndex + 1; i < lastNullIndex; ++i) {
		result += arr[i]; 
	} 
	return result;
}
//---------------------------------------------------------------- 
int FindFirstNullIndex(int* arr, int size) { 
	for (int i = 0; i < size; ++i) { 
		if (arr[i] == 0) { 
			return i; 
		} 
	} 
	return -1; 
} 
//---------------------------------------------------------------- 
int FindLastNullIndex(int* arr, int size) { 
	for (int i = size - 1; i >= 0; --i) { 
		if (arr[i] == 0) {
			return i; 
		} 
	} 
	return -1; 
}
