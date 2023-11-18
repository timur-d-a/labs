#pragma once
#include "PAIR.h"
//класс RATIONAL наследуется от класса PAIR
class RATIONAL :
	public PAIR
{
public:
	RATIONAL(void);//конструктор без параметров
public:
	~RATIONAL(void);//деструктор
	RATIONAL(const RATIONAL&);//конструктор копирования
	RATIONAL& operator=(const RATIONAL&);//операция присваивания
	friend istream& operator>>(istream& in, RATIONAL& l);//операция ввода
	friend ostream& operator<<(ostream& out, const RATIONAL& l); //операция вывода
public:
	int numerator;
	int divider;
};