#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int n;
	int numbers_even = 0;
	int numbers_odd = 0;
	cout << "Введите размер массива: "; cin >> n;
	int* arr = new int[n] {};
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
	int* arrEven = new int[numbers_even];
	int* arrOdd = new int[numbers_odd];
	cout << "Изначальный массив: ";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0)
		{
			arrEven[numbers_even++] = arr[i];
		}
		else
		{
			arrOdd[numbers_odd++] = arr[i];
		}
	}
	cout << "Все четные числа в массиве: ";
	for (int i = 0; i < numbers_even; i++)
	{
		cout << arrEven[i] << "\t";
	}
	cout << endl;
	cout << "Все нечетные числа в массиве: ";
	for (int i = 0; i < numbers_odd; i++)
	{
		cout << arrOdd[i] << "\t";
	}
	cout << endl;
	delete[] arr;
	delete[] arrEven;
	delete[] arrOdd;
}

