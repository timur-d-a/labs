#include <iostream>
#include "fraction.h"
using namespace std;
fraction make_fraction(double F, int S)
{
	fraction t;//������� ��������� ���������� 
	t.Init(F, S);//���������������� ���� ���������� t � ������� ���������� �������
	return t;//������� �������� ���������� t
}

double function(double x, fraction A)
{
	return A.first * x + A.second;
}

void main()
{
	int i;
	//����������� ���������� � � �
	fraction A;
	double x;
	A.Read();
	//����� �������� �������, ������������ � ������� ������� Power() 
	cout << "\nx? "; cin >> x;
	cout << A.first << "*" << x << " + " << A.second << " = " << function(x, A);
}