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
void chen(int a[][col],int p1,int p2,int k1,int k2)
{
   swap(a[p1][p2],a[k1][k2]);
}
int main()
{

    int a[row][col];
    int m,n,p1,p2,k1,k2;
    cin>>m;
    cin>>n;
nhap(a,m,n);
cin>>p1>>p2>>k1>>k2;
chen(a,p1,p2,k1,k2);
xuat(a,m,n);

    }




