// Practice5.1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "conio.h"
#include "iostream"
#include "math.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	double a, b, c, s, h;
	cout << "Введите значение большего основания: \n";
	cin >> a;
	cout << "Введите значение меньшего основания: \n";
	cin >> b;
	cout << "Введите значение угла а: \n";
	cin >> c;
	h = (a - b) / 2 * tan(c);
	s = (a + b)*h / 2;
	cout << "Площадь трапеции - " << round(s) << "\n";
	system("pause");
    return 0;
}

