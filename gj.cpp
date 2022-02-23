#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int m,n,q;
    cin>>m>>n>>q;
    int matrix1[m][n];
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        cin>>matrix1[i][j];

    }
    int matrix2[q][2];
    for(int i=1;i<=q;i++)
    {
        for(int j= 1;j<=2;j++)
        cin>>matrix2[i][j];
    }
    for( int i=1;i<=q;i++)
    {
        cout<<matrix1[matrix2[i][1]][matrix2[i][2]]<<endl;

    }






  return 0;
}










