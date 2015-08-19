#include <iostream>
using namespace std;

void createMass(int *arr, int size);
int findMax(int *arr, int size);
int findMin(int *arr, int size, int max);
int main()
{
	setlocale(LC_ALL, "Russian");

	//объявляем переменные
	//размер массива
	int size;
	cout << "введите размер массива\n";
	cin >> size;
	//объявляем массив
	int *arr = new int[size];
	//заполнение массива
	createMass(arr, size);
	//вычисление и вывод максимума 
	cout <<"Максимум: " << findMax(arr, size) << "\n";
	//вычисление и вывод минимума
	cout << "Минимум: " << findMin(arr, size, findMax(arr, size)) << "\n";
	system("pause");
	return 0;
}

void createMass(int *arr, int size)
{
	cout << "введите " << size << " элемента(ов) массива\n";
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
}

int findMax(int *arr, int size)
{
	int max=0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}

int findMin(int *arr, int size, int max)
{
	int min = max;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}