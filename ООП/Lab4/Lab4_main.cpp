#include <iostream>
#include "PAIR.h"
#include "RATIONAL.h"
using namespace std;

void main()
{
	PAIR a;
	cin >> a;
	a.Compare(a.first, a.second);
	a.Multiply(a.first, a.second);
	PAIR b;
	cin >> b;
	b.Compare(b.first, b.second);
	b.Multiply(b.first, b.second);

	cout << "pair a - pair b = " << a.first - b.first << "," << a.second - b.second << "\n";

	RATIONAL c;
	RATIONAL d;
	cin >> c;
	cin >> d;

	cout << "fraction c + fraction d = " << c.numerator / c.divider + d.numerator / d.divider << "\n";
	cout << "fraction c * fraction d = " << (c.numerator * d.numerator) / (c.divider * d.divider) << "\n";
}