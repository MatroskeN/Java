// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	fstream fs("D:\\hello.txt");
	if (!fs)
	{
		cout << "File not found!";
		system("pause");
	}
	int count = 0;
	int a;
	while (!fs.eof())
	{
		fs >> a;
		count++;
	}
	fs.clear();
	fs.seekg(0);
	int *mas = new int[count];
	for (int i = 0; i<count; i++)
		fs >> mas[i];
	for (int i = 0; i<count; i++)
		cout << mas[i] << ' ';
	cout << "\n";
	fs.close();
	int *res = new int[count];
	for (int i = 0; i < count; i++)
	{
		res[i] = pow(mas[i], 2);
		cout << res[i] << ' ';
	}
	cout << "\n";
	ofstream out;
	out.open("D:\\goodbye.txt"); 
	if (out.is_open())
	{
		for (int i = 0; i < count; i++)
		{
			out << res[i] << ' ';
		}
	}
	system("pause");
}

