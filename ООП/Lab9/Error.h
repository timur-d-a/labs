#pragma once
#pragma once
#include <string>
#include <iostream>
using namespace std;

class Error {
private:
	string code[4] = { "������: ������ ����������, ����� �� ������� ������!", "������: ���������� �������� ������ ������� ������� ������!", "������: ���������� �������� ��������� ������� ������� ������!", "������: ������ �� ��������� ���������!" };
	string str;
public:
	Error(int i) {
		str = code[i];
	}
	void What() {
		cout << str << '\n';
	}
};