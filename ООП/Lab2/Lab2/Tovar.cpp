#include "Tovar.h"
#include <iostream>
#include <string>
using namespace std;
//����������� ��� ����������
Tovar::Tovar()
{
	setlocale(LC_ALL, "RUS");
	naimenovanie = "";
	kolichestvo = 0;
	stoimost = 0;
	cout << "����������� ��� ���������� ��� ������� " << this << endl;
}
//����������� � �����������
Tovar::Tovar(string N, int K, double S)
{
	setlocale(LC_ALL, "RUS");
	naimenovanie = N;
	kolichestvo = K;
	stoimost = S;
	cout << "����������� � ����������� ��� ������� " << this << endl;
}
//����������� �����������
Tovar::Tovar(const Tovar& t)
{
	setlocale(LC_ALL, "RUS");
	naimenovanie = t.naimenovanie;
	kolichestvo = t.kolichestvo;
	stoimost = t.stoimost;
	cout << "����������� ����������� ��� ������� " << this << endl;
}
//����������
Tovar::~Tovar()
{
	setlocale(LC_ALL, "RUS");
	cout << "���������� ��� ������� " << this << endl;
}
//���������
string Tovar::get_naimenovanie()
{
	return naimenovanie;
}
int Tovar::get_kolichestvo()
{
	return kolichestvo;
}
double Tovar::get_stoimost()
{
	return stoimost;
}
//������������
void Tovar::set_naimenovanie(string N)
{
	naimenovanie = N;
}
void Tovar::set_kolichestvo(int K)
{
	kolichestvo = K;
}
void Tovar::set_stoimost(int S)
{
	stoimost = S;
}
//����� ��� ��������� ���������
void Tovar::show()
{
	setlocale(LC_ALL, "RUS");
	cout << "���������: " << naimenovanie << endl;
	cout << "����� ��: " << kolichestvo << endl;
	cout << "����� ��: " << stoimost << endl << "\n";
}