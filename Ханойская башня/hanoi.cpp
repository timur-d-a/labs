#include <iostream>
using namespace std;
void hanoi(int n, char a, char b, char c){
  if(n>0){
    hanoi(n-1, a, c, b);
    cout << a << ">" << b << endl;
    hanoi(n-1, c, b, a);
  }
}
int main(){
    int n;
    char from = 'A';
    char to = 'B';
    char temp = 'C';
    setlocale(LC_ALL, "RUS");
    cout<<"Введите число дисков"<<endl; cin>>n;
    hanoi(n, from, to, temp);
    return 0;
}
