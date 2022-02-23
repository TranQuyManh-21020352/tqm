int** inputMatrix(int nRows, int nCols)
{
    int **p=new int *[nRows];
    for(int i=0;i<nRows;i++)
    {
        p[i] = new int[nCols];
    }
     for(int i=0;i<nRows;i++)
    {
        for(int j=0;j<nCols;j++)
        {
           cin>>p[i][j];
        }
    }
    return p;
}
void printMatrix(int** matrix, int nRows, int nCols)
{
    for(int i=0;i<nRows;i++)
    {
        for(int j=0;j<nCols;j++)
        {
           cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}
/* ma tran chuyen vi*/
int** transpose (int** matrix, int m, int n)
{
    int **p=new int*[n];
    for(int i=0;i<n;i++)
    {
        p[i] = new int[m];
    }
   for(int  i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           p[i][j]=matrix[j][i];
       }
   }
   return p;

}
