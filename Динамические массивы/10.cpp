int main()
{
    int n,m;
    cout<<"Введите размеры матрицы"<<endl; cin>>n>>m;
    int **matr;
    int i,j;
    matr=new int*[n];
    for (i=0;i<n;i++)
    {
    matr[i]=new int[n];
    for (j=0;j<m;j++)
    {
    matr[i][j]=rand()%10;
    cout<<matr[i][j]<<" ";
    }
    cout<<endl; 
    }
    
    int x;
    cout<<"Введите номер строки, который нужно удалить"<<endl; cin>>x; x--;
    
    
    for (;x<n-1;x++)
        matr[x]=matr[x+1];
    
    for (i=0;i<n-1;i++)
    {
    for (j=0;j<m;j++)
    {
    cout<<matr[i][j]<<" ";
    }
    cout<<endl;
    }
    
    for (i=0;i<n;i++) delete matr[i];
    delete[] matr;
    
    return 0;
}
