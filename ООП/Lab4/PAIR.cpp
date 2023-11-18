#include "PAIR.h"
//конструктор без параметров
PAIR::PAIR(void)
{
	first = 0;
	second = 0;
}
//деструктор
PAIR::~PAIR(void)
{
}
//конструктор с параметрами
PAIR::PAIR(string M, int C, int P)
{
	first = C;
	second = P;
}
//конструктор копирования
PAIR::PAIR(const PAIR& PAIR)
{
	first = PAIR.first;
	second = PAIR.second;
}
//модификаторы
void PAIR::Set_first(int C)
{
	first = C;
}
void PAIR::Set_second(int P)
{
	second = P;
}
//перегрузка операции присваивания
PAIR& PAIR::operator=(const PAIR& c)
{
	if (&c == this)return *this;
	second = c.second;
	first = c.first;
	return *this;
}
//глобальная функция для ввода
istream& operator>>(istream& in, PAIR& c)
{
	cout << "first:"; in >> c.first;
	cout << "second:"; in >> c.second;
	return in;
}
//глобальная функция для вывода
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