#include "stdafx.h"
#include "conio.h"
#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "RUS");

	int n, c;
	int x = 0;// Число, цифра, результат в кол-ве
	cin >> n; //Число
	cin >> c; //Цифра

	do
	{
		if (n % 10 == c)
		{
			x++;
		}
		n /= 10;

	} while (n / 10 > 0);

	if (n % 10 == c)
	{
		x++;
	}
	n /= 10;

	cout << "Итого " << x << endl;

	system("pause"); // Команда задержки экрана
	return 0;
}

