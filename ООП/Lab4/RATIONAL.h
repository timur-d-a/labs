#pragma once
#include "PAIR.h"
//����� RATIONAL ����������� �� ������ PAIR
class RATIONAL :
	public PAIR
{
public:
	RATIONAL(void);//����������� ��� ����������
public:
	~RATIONAL(void);//����������
	RATIONAL(const RATIONAL&);//����������� �����������
	RATIONAL& operator=(const RATIONAL&);//�������� ������������
	friend istream& operator>>(istream& in, RATIONAL& l);//�������� �����
	friend ostream& operator<<(ostream& out, const RATIONAL& l); //�������� ������
public:
	int numerator;
	int divider;
};