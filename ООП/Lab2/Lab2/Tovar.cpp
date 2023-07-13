#include "Tovar.h"
#include <iostream>
#include <string>
using namespace std;
//конструктор без параметров
Tovar::Tovar()
{
	setlocale(LC_ALL, "RUS");
	naimenovanie = "";
	kolichestvo = 0;
	stoimost = 0;
	cout << "Конструктор без параметров для объекта " << this << endl;
}
//конструктор с параметрами
Tovar::Tovar(string N, int K, double S)
{
	setlocale(LC_ALL, "RUS");
	naimenovanie = N;
	kolichestvo = K;
	stoimost = S;
	cout << "Конструктор с параметрами для объекта " << this << endl;
}
//конструктор копирования
Tovar::Tovar(const Tovar& t)
{
	setlocale(LC_ALL, "RUS");
	naimenovanie = t.naimenovanie;
	kolichestvo = t.kolichestvo;
	stoimost = t.stoimost;
	cout << "Конструктор копирования для объекта " << this << endl;
}
//деструктор
Tovar::~Tovar()
{
	setlocale(LC_ALL, "RUS");
	cout << "Деструктор для объекта " << this << endl;
}
//селекторы
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
//модификаторы
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
//метод для просмотра атрибутов
void Tovar::show()
{
	setlocale(LC_ALL, "RUS");
	cout << "Процессор: " << naimenovanie << endl;
	cout << "Объём ОП: " << kolichestvo << endl;
	cout << "Объём ЖД: " << stoimost << endl << "\n";
}