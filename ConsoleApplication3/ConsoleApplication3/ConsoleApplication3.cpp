// ConsoleApplication3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <stdlib.h>
#include <conio.h>
#include <cmath>
#include <time.h>
#include <iostream>

using namespace std;

int din_array(int* arr, int n)
{
	int num = 2;
		for (int i = 0; i < n; i++)
		{
			arr[i] = num;
			num++;
		}
	return arr, n;
}


int main()
{
	setlocale(LC_ALL, "RUS");
	int x = 0;
	cout << "Введите число N: ";
	cin >> x;
	int *interval = new int[x];
	din_array (interval, x);

	system("pause");
    return 0;
}