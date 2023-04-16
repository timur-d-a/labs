#include <iostream>
using namespace std;
 
int board[8][8];
 
void resetQ(int i, int j)   // уменьшение значения элементов по всем линиям ферзя и сброс данного элемента
    {
    for(int x=0; x<8; ++x)
        {
        --board [x][j];
        --board [i][x];
        int k;
        k=j-i+x;
        if (k>=0 && k<8)
            --board[x][k];
        k=j+i-x;
        if (k>=0 && k<8)
            --board[x][k];
        }
    board[i][j] = 0;
    }
 
void setQ(int i, int j)     // увеличение значения элементов по всем линиям ферзя и присвоение данному элементу значения -1
    {
    for(int x=0; x<8; ++x)
        {
        ++board [x][j];
        ++board [i][x];
        int k;
        k=j-i+x;
        if (k >= 0 && k<8)
            ++board[x][k];
        k = j+i-x;
        if (k >= 0 && k<8)
            ++board[x][k];
        }
    board[i][j]=-1;
    }
 
bool tryQ(int i)            // проверка на то, можно ли поставить ферзя
    {
    bool result = false;
    for (int j=0; j<8; ++j)
    {
        if (board[i][j]==0) // если клетка не тронута, увеличить все значения на 1
        {
            setQ(i,j);
            if(i==7)
                result=true;
            else
            {
                if(!(result=tryQ(i+1))) // иначе, если на следующей клетке нельзя поставить ферзя, уменьшить все значения на 1
                    resetQ(i,j);
            }
        }
    if(result)
        break;
    }
    return result;
    }
int main()
    {
    for(int i=0; i<8; ++i)
    for(int j=0; j<8; ++j)
        board[i][j]=0;
        tryQ(0);
    for(int i=0; i<8; ++i)
        {
        for(int j=0; j<8; ++j)
            {
            if (board[i][j] == -1)  // значение -1 в массиве означает, что клетка подходит для ферзя
                cout<<" x";
            else 
                cout<<" o";
            }
        cout<<endl;
        }
    return 0;
    }

