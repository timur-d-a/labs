#include "Money.h"
#include <iostream>
using namespace std;
Money& Money::operator=(const Money& t)
{
	if (&t == this) return *this;
	rubles = t.rubles;
	kopecks = t.kopecks;
	return *this;
}
Money& Money::operator++()
{
	int temp = rubles * 100 + kopecks;
	temp++;
	rubles = temp / 100;
	kopecks = temp % 100;
	return *this;
}
Money Money::operator ++(int)
{
	int temp = rubles * 100 + kopecks;
	temp++;
	Money t(rubles, kopecks);
	rubles = temp / 100;
	kopecks = temp % 100;
	return t;
}
Money Money::operator+(const Money& t)
{
	int temp1 = rubles * 100 + kopecks;
	int temp2 = t.rubles * 100 + t.kopecks;
	Money p;
	p.rubles = (temp1 + temp2) / 100;
	p.kopecks = (temp1 + temp2) % 100;
	return p;
}
istream& operator>>(istream& in, Money& t)
{
	cout << "rubles?"; in >> t.rubles;
	cout << "kopecks?"; in >> t.kopecks;
	return in;
}
ostream& operator<<(ostream& out, const Money& t)
{
	return (out << t.rubles << "," << t.kopecks);
}