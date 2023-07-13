#include "Tovar.h"
#include <iostream>
#include <string>
using namespace std;
//������� ��� �������� ������� ��� ����������
Tovar make_tovar()
{
	string s;
	int i;
	double d;
	cout << "��� ����������: ";
	cin >> s;
	cout << "����� ��: ";
	cin >> i;
	cout << "����� ��: ";
	cin >> d;
	Tovar t(s, i, d);
	return t;
}
//������� ��� �������� ������� ��� ���������
void print_tovar(Tovar t)
{
	t.show();
}
void main()
{
	setlocale(LC_ALL, "RUS");
	//����������� ��� ����������
	Tovar t1;
	t1.show();
	//���������� � �����������
	Tovar t2("Intel Core i5", 4096, 8192);
	t2.show();
	//����������� �����������
	Tovar t3 = t2;
	t3.set_naimenovanie("AMD Phenom II");
	t3.set_kolichestvo(8192);
	t3.set_stoimost(16384);
	//����������� �����������
	print_tovar(t3);
	//����������� �����������
	t1 = make_tovar();
	t1.show();
}