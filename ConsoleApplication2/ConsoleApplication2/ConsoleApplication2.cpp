// ConsoleApplication2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <conio.h>
#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int x = 0;
	cout << "Введите размерность массива\n";
	cin >> x;
	int median = 0;
	int summ = 0;
	int average = 0;
	int *num = new int [x];
	for (int i = 0; i < x; i++)
	{
		num[i] = i+1;
	}
	for (int i = 0; i < x; i++)
	{
		summ += num[i];
	}
	average = summ/x;
	if (x % 2 == 0)
	{
		median = x/2;
	}
	else median = x/2+1;
	cout << "Среднее арифметическое - " << average << "\t" << "Медиана - " << median << "\n";
	if (average < median)
		cout << "True\n";
	else
		cout << "False\n";
	system("pause");
    return 0;
}

