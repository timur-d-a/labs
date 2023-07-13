#include <iostream>
#include "fraction.h"
using namespace std;
fraction make_fraction(double F, int S)
{
	fraction t;//создали временную переменную 
	t.Init(F, S);//инициализировали поля переменной t с помощью параметров функции
	return t;//вернули значение переменной t
}

double function(double x, fraction A)
{
	return A.first * x + A.second;
}

void main()
{
	int i;
	//определение переменных А и В
	fraction A;
	double x;
	A.Read();
	//вывод значения степени, вычисленного с помощью функции Power() 
	cout << "\nx? "; cin >> x;
	cout << A.first << "*" << x << " + " << A.second << " = " << function(x, A);
}