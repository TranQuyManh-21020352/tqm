#include<iostream>

using namespace std;

void nhapmang(int a[][100],int m,int n)
{
    for(int i = 0; i < m; i++)
    {
        for(int j =0; j < n; j++)
        {
            cin>>a[i][j];
        }
    }
}
void xuatmang(int a[][100],int m,int n)
{
    for(int i = 0; i < m; i++)
    {
        for(int j =0; j < n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
void chenmang(int a[][100], int m,int &n,int p,int k)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = n ; j > p; j--)
        {
            a[i][j] = a[i][j-1];
        }
    }
    for(int i =0; i < m;i++)
    {
        a[i][p] = k;
    }
    n++;
}
int main()
{
 int m,n;
 cin>>m>>n;
 int a[m][100];
 int p,k;
 cin>>p>>k;
 nhapmang(a,m,n);
 chenmang(a,m,n,p,k);
 xuatmang(a,m,n);
}
