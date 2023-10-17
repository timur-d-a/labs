#pragma once
#include <iostream>
using namespace std;
class Money
{
	public:
	long rubles;
	int kopecks;
	Money() { rubles = 0; kopecks = 0; };
	Money(int m, int s) { rubles = m; kopecks = s; }
	Money(const Money& t) { rubles = t.rubles; kopecks = t.kopecks; }
	~Money() {};
	int get_rubles() { return rubles; }
	int get_kopecks() { return kopecks; }
	void set_rubles(int m) { rubles = m; }
	void set_kopecks(int s) { kopecks = s; }
	Money& operator=(const Money&);
	Money& operator++();
	Money operator++(int);
	Money operator+(const Money&);
	friend istream& operator>>(istream& in, Money& t);
	friend ostream& operator<<(ostream& out, const Money& t);
};