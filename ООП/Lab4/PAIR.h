#pragma once
#include <string>
#include <iostream>
using namespace std;
class PAIR
{
	//����������� ��� ����������
public:
	PAIR(void);
public:
	//����������
	virtual ~PAIR(void);
	//���������� � �����������
	PAIR(string, int, int);
	//����������� �����������
	PAIR(const PAIR&);
	int Get_first() { return first; }
	int Get_second() { return second; }
	void Compare(int C, int P);
	void Multiply(int C, int P);
	//������������
	void Set_first(int);
	void Set_second(int);
	//���������� �������� ������������
	PAIR& operator=(const PAIR&);
	//���������� ���������-������� �����-������
	friend istream& operator>>(istream& in, PAIR& c);
	friend ostream& operator<<(ostream& out, const PAIR& c);
	//��������
public:
	int first;
	int second;
};