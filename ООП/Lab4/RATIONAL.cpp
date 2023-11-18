#include "RATIONAL.h"
//����������� ��� ����������
RATIONAL::RATIONAL(void):PAIR()
{
	numerator = 0;
	divider = 0;
}
//���������
RATIONAL::~RATIONAL(void)
{
}
//����������� �����������
RATIONAL::RATIONAL(const RATIONAL& L)
{
	numerator = L.numerator;
	divider = L.divider;
}
//�����������
//������� ������������
RATIONAL& RATIONAL::operator=(const RATIONAL& l)
{
	if (&l == this)return *this;
	divider = l.divider;
	numerator = l.numerator;
	return *this;
}
//�������� �����
istream& operator>>(istream& in, RATIONAL& l)
{
	cout << "numerator:"; in >> l.numerator;
	cout << "divider:"; in >> l.divider;
	cout << "\n";
	return in;
}
//�������� ������
ostream& operator<<(ostream& out, const RATIONAL& l)
{
	out << "numerator : " << l.numerator;
	out << "divider : " << l.divider;
	out << "\n";
	return out;
}