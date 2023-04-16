#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char s[255];
    char temp;
    cout<<"Введите строку"<<endl;
    gets(s);
    int n = strlen(s);
    for(int i=0;i<n;i++)
        for(int j=i;j<n;j++)
        if(s[i]>s[j]) 
        {
            temp=s[i]; 
            s[i]=s[j];
            s[j]=temp;
        }    
    
    for (int i=0; i<n; i++)
    {
        cout<<s[i];
    }
    return 0;
}



