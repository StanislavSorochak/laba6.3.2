// Lab_06_3_2.cpp
// < Сорочак Станіслав >
// Лабораторна робота №6.3.2
// Опрацювання одновимірних масивів за допомогою звичайних функцій та шаблонів
// Варіант 24

#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void create(int* a, int size, const int Low, const int High, int i)
{
	if (i < size)
	{
		a[i] = Low + rand() % (High - Low + 1);
		create(a, size, Low, High, ++i);
	}
}

int Print(int* a, int size, int i)
{
	if (i < size)
	{
		cout << (i > 0 ? ", " : "") << a[i];
		Print(a, size, ++i);
	}
	return i;
}

template <typename T> 
T PrintTValue(T* a, const T size, T i)
{
	if (i < size)
	{
		cout << "a" << setw(4) << a[i] << endl;
		PrintTValue(a, size, ++i);
	}
	else return 0;
}

int main()
{
	srand((unsigned)time(NULL)); 

	const int n = 6;
	int a[n];
	int Low = -27;
	int High = 19;

	create(a, n, Low, High, 0);

	Print(a, n, 0);

	PrintTValue(a, n, 0);

	return 0;
}
