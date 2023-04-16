#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    int n = 10;
    int a[n];
    int i,j,q;
    setlocale(LC_ALL, "RUS");
    for (i = 0; i < n; i++){
        a[i] = rand() % 10 - 1;
        cout<<a[i]<<" ";
    }
    cout<<endl;
    bool flag = 0;
    for (i = n; (i > 0 && flag == 0); i--){
        if (a[i] == 0){
            flag = 1;
            for (j = i; j < n-1; j++){
                a[j] = a[j+1];
            }
            n--;
        }
    }
    if (flag == 0){cout<<"Элементов, равных нулю, не обнаружено"<<endl;}
    else{cout<<"Последний элемент, равный нулю, удалён"<<endl;}
    cout<<"Введите индекс"<<endl; cin >> q;
    if (q >= 0 && q<n){
        n++;
        for (j = n; j > q; j--){
                a[j] = a[j-1];
        }
        a[q+1]=100;
        cout<<"Элемент добавлен"<<endl;
    }
    else{
        cout<<"Недопустимое значение"<<endl;
    }
    for (i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }
}


