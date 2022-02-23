#include <iostream>

#define row 100
#define col 100
using namespace std;
void nhap(int a[][col],int m,int n)
{
 for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {

            cin>>a[i][j];
        }

}


}

void xuat(int a[][col],int m,int n)
{
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
void chen(int a[][col],int &m,int n,int p,int k)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=m+1;j>p;j--)
        {
           a[j][i]=a[j-1][i];
        }
    }
    m++;
    for(int i=1;i<=n;i++)
    {
        a[p][i]=k;
    }
}
int main()
{

    int a[row][col];
    int m,n,p,k;
    cin>>m;
    cin>>n;
nhap(a,m,n);
cin>>p>>k;
chen(a,m,n,p,k);
xuat(a,m,n);

    }



