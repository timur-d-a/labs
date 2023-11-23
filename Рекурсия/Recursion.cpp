#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

double x;

double f(int n, int end, double fac) {
    fac *= n;
    double s = 1 + cos(n * M_PI / 4) / fac * x;
    return n < end ? s + f(n + 1, end, fac) : s;
}

int main() {
    double n;
    cin >> x >> n;
    cout << f(1, n, 1);
    return 0;
}