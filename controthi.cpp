/*khởi tạo con trở*/
int** getImage (int nRows, int nCols)
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
void fillImage (int** image, int nRows, int nCols, int threshold)
{
    for(int i=0;i<nRows;i++)
    {
        for(int j=0;j<nCols;j++)
        {
            if(image[i][j]<threshold)
            {
                image[i][j]=0;
            }

        }
    }
}
void print (int** image, int nRows, int nCols)
{
    for(int i=0;i<nRows;i++)
    {
        for(int j=0;j<nCols;j++)
        {
           cout<<image[i][j]<<" ";
        }
        cout<<endl;
    }
}
//ma trận chuyển vị
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
