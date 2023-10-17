#include "Money.h"
#include <iostream>
using namespace std;
void main()
{
	Money a;
	Money b;
	cin >> a;
	cin >> b;
	cout << ((a.rubles*100 + a.kopecks) / (b.rubles*100 + b.kopecks)) << endl;
	Money a2;
	cin >> a2;
	float c;
	cout << "multiplication:"; cin >> c;
	cout << a2.rubles * c << "," << a2.kopecks * c;
}