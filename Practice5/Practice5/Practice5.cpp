// Practice5.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "conio.h"
#include "math.h"
#include "iostream"

using namespace std;

int main() {
	setlocale(LC_ALL, "RUS");
	double x,res;
	cout << "Введите значение х: ";
	cin >> x;
	res = sqrt(abs(pow(sin(x), 2))) / (x*3.01 - exp(2 * x));
	cout << "x = " << res << "\n";
	system("pause");
    return 0;
}

