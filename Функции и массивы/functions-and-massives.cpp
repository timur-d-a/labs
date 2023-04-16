#include <iostream>
#include <time.h>
using namespace std;

void (change(int a[10][10]))
{
    int i,j,q;
    int n = 10; int m = 10;
    for (i = 0; i < n; i++){
        for (j = i+1; j < n; j++){
            if (a[i][0] == a[j][0]){
                cout<<"Найдены строки для замены"<<endl;
                int b[m];
                for (q = 0; q < m; q++){
                    b[q]=a[i][q];
                    cout<<b[q]<<" ";
                }
                cout<<endl;
                for (q = 0; q < m; q++){
                    a[i][q]=a[j][q];
                    cout<<a[j][q]<<" ";
                }
                cout<<endl;
                for (q = 0; q < m; q++){
                    a[j][q]=b[q];
                }
                cout<<endl;
            }
        }
    }
    for (i = 0; i < m; i++){
        for (j = i+1; j < m; j++){
            if (a[0][i] == a[0][j]){
                cout<<"Найдены столбцы для замены"<<endl;
                int b[n];
                for (q = 0; q < n; q++){
                    b[q]=a[q][i];
                    cout<<b[q]<<" ";
                }
                cout<<endl;
                for (q = 0; q < n; q++){
                    a[q][i]=a[q][j];
                    cout<<a[q][j]<<" ";
                }
                cout<<endl;
                for (q = 0; q < n; q++){
                    a[q][j]=b[q];
                }
                cout<<endl;
            }
        }
    }
}

int main()
{
    int n = 10; int m = 10;
    int s[10][10];
    int i,j;
    setlocale(LC_ALL, "RUS");
    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            s[i][j] = rand() % 10;
            cout<<s[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    change(s);
    cout<<"Результат:"<<endl;
    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            cout<<s[i][j]<<" ";
        }
        cout<<endl;
    }
}


