#include <iostream>
#include <complex>
using namespace std;

void d_real(int a, int b)
{
    cout<<a/b;
}

void d_complex(complex<double> a, complex<double> b)
{
    cout<<a/b;
}

int main()
{
    setlocale(LC_ALL, "RUS");
    bool num;
    cout<<"Вещественные или комплексные числа?"<<endl<<"0 - вещественные, 1 - комплексные"<<endl;;
    cin>>num;
    if (num==0)
    {
        int n,m;
        cout<<"Введите числа"<<endl;
        cin>>n>>m;
        d_real(n,m);
    }
    if (num==1)
    {
        complex<double> n;
        complex<double> m;
        cout<<"Введите числа"<<endl;
        cin>>n>>m;
        d_complex(n,m);
    }
    return 0;
}
