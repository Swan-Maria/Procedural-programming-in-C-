#include <iostream>
#include <time.h>

typedef int (*find_t) (int*, int);

void RemoveSymbols(char* str);

void OffSetLeft(char* str);

bool FindSymbols(char* str);

int FindIndex(int* arr, size_t size, find_t action);

int FindMaxIndex(int* arr, int size);

int FindMinIndex(int* arr, int size);

void PrintArray(int* arr, int size);

int MultipleElementsBetweenIndexes(int* arr, int start, int finish);

int AddElementsBetweenIndexes(int* arr, int firstNullIndex, int lastNullIndex);

int FindFirstNullIndex(int* arr, int size);

int FindLastNullIndex(int* arr, int size);

char signs[] = { '.', ',', '!', '?', ':', ';', '-', '\'', ' ', '\0' };
const int SIZE = 50;

int main()
{
	srand(time(NULL));
	
	// Task 1
	char inputString[150];
	std::cout << "Enter line...\n";
	std::cin.getline(inputString, 150);
	std::cout <<"before: " << inputString << '\n';
	RemoveSymbols(inputString);
	std::cout <<"after: " << inputString << '\n';

	// Task 2
	int inputArray[SIZE];
	for (int i = 0; i < SIZE; ++i)
		inputArray[i] = rand() % 11;
	PrintArray(inputArray, SIZE);
	int minIndex = FindIndex(inputArray, SIZE, FindMinIndex);
	int maxIndex = FindIndex(inputArray, SIZE, FindMaxIndex);
	std::cout << "min index: " << minIndex << '\n' << "max index: " << maxIndex << '\n';
	int start, finish;
	if (minIndex < maxIndex)
		start = minIndex, finish = maxIndex;
	else
		start = maxIndex, finish = minIndex;
	int mult = MultipleElementsBetweenIndexes(inputArray, start, finish);
	std::cout << "multiple of array between max and min value:" << mult << '\n';
	
	return 0;
}
//----------------------------------------------------------------
void RemoveSymbols(char* str) {
	while (FindSymbols(str)) 
		for (char* c = str; *c != '\0'; ++c)
			for (char* s = signs; *s != '\0'; ++s)
				if (*c == *s)
					OffSetLeft(c);

}
//----------------------------------------------------------------
void OffSetLeft(char* line) {
	for (char* ptr = line; *ptr != '\0'; ++ptr)
		*ptr = *(ptr + 1);
}
//----------------------------------------------------------------
bool FindSymbols(char* str)
{
	for (char* c = str; *c != '\0'; ++c)
		for (char* s = signs; *s != '\0'; ++s)
			if (*c == *s)
				return true;
	return false;
}
//----------------------------------------------------------------
int FindIndex(int* arr, size_t size, find_t action)
{
	return action(arr, size);
}
//----------------------------------------------------------------
int FindMaxIndex(int* arr, int size)
{
	int maxIndex = 0;
	int MaxElement = arr[0];
	for (int i = 1; i < size; ++i) 
		if (arr[i] > MaxElement) {
			MaxElement = arr[i];
			maxIndex = i;
		}
	return maxIndex;
}
//----------------------------------------------------------------
int FindMinIndex(int* arr, int size)
{
	int minIndex = 0;
	int MinElement = arr[0];
	for (int i = 1; i < size; ++i)
		if (arr[i] < MinElement) {
			MinElement = arr[i];
			minIndex = i;
		}
	return minIndex;
}
//----------------------------------------------------------------
void PrintArray(int* arr, int size)
{
	for (int i = 0; i < size; ++i)
		std::cout << arr[i] << "    ";
	std::cout << '\n';
}
//----------------------------------------------------------------
int MultipleElementsBetweenIndexes(int* arr, int start, int finish)
{
	int result = 1;
	int i = start + 1;
	while (i < finish) {
		result *= arr[i];
		i++;
	}
	return result;
}
//----------------------------------------------------------------
int AddElementsBetweenIndexes(int* arr, int firstNullIndex, int lastNullIndex)
{
	int result = 0;
	int i = firstNullIndex + 1;
	while (i < lastNullIndex) {
		result += arr[i];
		i++;
	}
	return result;
}
//----------------------------------------------------------------
int FindFirstNullIndex(int* arr, int size)
{
	int firstNullIndex = -1;
	for (int i = 0; i < size; ++i)
		if (arr[i] == 0)
			firstNullIndex = i;
	return firstNullIndex;
}
//----------------------------------------------------------------
int FindLastNullIndex(int* arr, int size)
{
	int lastNullIndex = -1;
	for (int i = size - 1; i >= 0; --i)
		if (arr[i] == 0) 
			lastNullIndex = i;
	return lastNullIndex;
}
