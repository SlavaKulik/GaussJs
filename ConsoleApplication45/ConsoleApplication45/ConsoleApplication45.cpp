// ConsoleApplication45.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <iostream>
#include <cmath>


using namespace std;
int main()
{
	double a11 = 5, a12 = 1, a13 = -1, a14 = 1;  // матрица 
	double a21 = 1, a22 = -4, a23 = 1, a24 = -1;
	double a31 = -1, a32 = 1, a33 = 4, a34 = 1;
	double a41 = 1, a42 = 2, a43 = 1, a44 = -5;
	double b1 = 18, b2 = 0, b3 = 9, b4 = 8;      // столбец свободных членов

	double x1 = 4.2, x2 = 1, x3 = 2, x4 = 0.5;          // начальное приближение
	double x1n, x2n, x3n, x4n;
	double eps = 0.005;
	int count;

	if (fabs(a11) > fabs(a12) + fabs(a13) + fabs(a14) &&
		fabs(a22) > fabs(a21) + fabs(a23) + fabs(a24) &&
		fabs(a33) > fabs(a31) + fabs(a32) + fabs(a34) &&
		fabs(a44) > fabs(a41) + fabs(a42) + fabs(a43))
		cout << "Diagonal'noe preobladaniye ne narushaetsya" << endl;
	else
	{
		cout << "Diagonal'noe preobladaniye narushaetsya" << endl;
	}
	count = 0;
	do
	{
		x1n = (b1 - x2 - x3 - x4) / a11;
		x2n = (b2 - x1 - x3 - x4) / a22;
		x3n = (b3 - x1 - x2 - x4) / a33;
		x4n = (b4 - x1 - x2 - x3) / a44;
		count = count + 1;
		if (fabs(x1n - x1) < eps &&
			fabs(x2n - x2) < eps &&
			fabs(x3n - x3) < eps &&
			fabs(x4n - x4) < eps) break;
		x1 = x1n;
		x2 = x2n;
		x3 = x3n;
		x4 = x4n;
		cout << "Kolichestvo iter. = " << count << endl << "x1 = " << x1 << endl
			<< "x2 = " << x2 << endl << "x3 = " << x3 << endl << "x4 = " << x4 << endl;
		//  cout << "x1 = " << x1n << endl << "x2 = " << x2n << endl << "x3 = " << x3n << endl << "x4 = " << x4n << endl;   
	} while (1);
	x1 = x1n;
	x2 = x2n;
	x3 = x3n;
	x4 = x4n;
	cout << "Kolichestvo iter. = " << count << endl << "x1 = " << x1 << endl
		<< "x2 = " << x2 << endl << "x3 = " << x3 << endl << "x4 = " << x4 << endl;
}