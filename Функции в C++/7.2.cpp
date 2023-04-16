#include <iostream>
#include <stdarg.h>
using namespace std;

int min_el (int size, ...)
{
    int data, min;
    va_list args;
    va_start(args,size);
    min = va_arg(args,int);
    for (int count = 0; count < size-1; ++count) {
        data = va_arg(args,int);
        if (min > data) min = data;
    }
    va_end(args);
    return min;
}

int main()
{
	int a[5];
	for (int i = 0; i < 5; i++) {
		a[i] = rand() % 10;
		cout << a[i] << " ";
	}
	cout << endl << min_el(5, a[0], a[1], a[2], a[3], a[4]) << endl;

	int b[10];
	for (int i = 0; i < 10; i++) {
		b[i] = rand() % 10;
		cout << b[i] << " ";
	}
	cout << endl << min_el(10, b[0], b[1], b[2], b[3], b[4], b[5], b[6], b[7], b[8], b[9]) << endl;

	int c[12];
	for (int i = 0; i < 12; i++) {
		c[i] = rand() % 10;
		cout << c[i] << " ";
	}
	cout << endl << min_el(12, c[0], c[1], c[2], c[3], c[4], c[5], c[6], c[7], c[8], c[9], c[10], c[11]) << endl;

	return 0;
}

