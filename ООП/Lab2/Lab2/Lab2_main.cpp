#include "Tovar.h"
#include <iostream>
#include <string>
using namespace std;
//функция для возврата объекта как результата
Tovar make_tovar()
{
	string s;
	int i;
	double d;
	cout << "Имя процессора: ";
	cin >> s;
	cout << "Объём ОП: ";
	cin >> i;
	cout << "Объём ЖД: ";
	cin >> d;
	Tovar t(s, i, d);
	return t;
}
//функция для передачи объекта как параметра
void print_tovar(Tovar t)
{
	t.show();
}
void main()
{
	setlocale(LC_ALL, "RUS");
	//конструктор без параметров
	Tovar t1;
	t1.show();
	//коструктор с параметрами
	Tovar t2("Intel Core i5", 4096, 8192);
	t2.show();
	//конструктор копирования
	Tovar t3 = t2;
	t3.set_naimenovanie("AMD Phenom II");
	t3.set_kolichestvo(8192);
	t3.set_stoimost(16384);
	//конструктор копирования
	print_tovar(t3);
	//конструктор копирования
	t1 = make_tovar();
	t1.show();
}