#include <iostream>
using namespace std;
void nhapmang(int a[][100],int m,int n)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
        cout<<endl;
    }
}
void chenmang(int a[][100],int m,int &n,int p,int k)
{
    for(int i=0;i<m;i++)
    {
        for(int j=n;j>p;j--)
        {
            a[i][j]=a[i][j-1];
        }
    }
    for(int i=0;i<m;i++)
    {
        cin>>k;
        a[i][p]=k;
    }
    n++;
}
void xuatmang(int a[][100],int m,int n)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"a["<<i<<"]["<<j<<"]:"<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int a[100][100];
    int m,n,p,k;
    cin>>m>>n>>p;
    nhapmang(a,m,n);
    chenmang(a,m,n,p,k);
    xuatmang(a,m,n);
    return 0;


}
