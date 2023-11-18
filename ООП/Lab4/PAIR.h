#pragma once
#include <string>
#include <iostream>
using namespace std;
class PAIR
{
	//конструктор без параметров
public:
	PAIR(void);
public:
	//деструктор
	virtual ~PAIR(void);
	//констрктор с параметрами
	PAIR(string, int, int);
	//конструктор копирования
	PAIR(const PAIR&);
	int Get_first() { return first; }
	int Get_second() { return second; }
	void Compare(int C, int P);
	void Multiply(int C, int P);
	//модификаторы
	void Set_first(int);
	void Set_second(int);
	//перегрузка операции присваивания
	PAIR& operator=(const PAIR&);
	//глобальные операторы-функции ввода-вывода
	friend istream& operator>>(istream& in, PAIR& c);
	friend ostream& operator<<(ostream& out, const PAIR& c);
	//атрибуты
public:
	int first;
	int second;
};