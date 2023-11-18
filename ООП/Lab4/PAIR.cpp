#include "PAIR.h"
//����������� ��� ����������
PAIR::PAIR(void)
{
	first = 0;
	second = 0;
}
//����������
PAIR::~PAIR(void)
{
}
//����������� � �����������
PAIR::PAIR(string M, int C, int P)
{
	first = C;
	second = P;
}
//����������� �����������
PAIR::PAIR(const PAIR& PAIR)
{
	first = PAIR.first;
	second = PAIR.second;
}
//������������
void PAIR::Set_first(int C)
{
	first = C;
}
void PAIR::Set_second(int P)
{
	second = P;
}
//���������� �������� ������������
PAIR& PAIR::operator=(const PAIR& c)
{
	if (&c == this)return *this;
	second = c.second;
	first = c.first;
	return *this;
}
//���������� ������� ��� �����
istream& operator>>(istream& in, PAIR& c)
{
	cout << "first:"; in >> c.first;
	cout << "second:"; in >> c.second;
	return in;
}
//���������� ������� ��� ������
ostream& operator<<(ostream& out, const PAIR& c)
{
	out << "first : " << c.first;
	out << "second : " << c.second;
	out << "\n";
	return out;
}
void PAIR::Compare(int C, int P)
{
	if (C == P) cout << C << " == " << P;
	else cout << C << " =/= " << P;
	cout << "\n";
}

void PAIR::Multiply(int C, int P)
{
	cout << C << " * " << P << " = " << C * P;
	cout << "\n";
}