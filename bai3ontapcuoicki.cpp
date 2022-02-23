#include<iostream>

using namespace std;

void xoa(int b[],int &n,int k)
{
    for(int i = k;i<n-1;i++)
    {
        b[i] = b[i+1];
    }
    n--;
}

void xoamang(int a[] , int b[],int &n)
{
    int h =0;
    for(int i = 0; i < n; i++)
    {
        if(b[i] != a[h])
        {
            xoa(b,n,i);
            i--;
        }
        else
        {
            h++;
        }
    }
}

int main()
{
    int n;
    cin>>n;
    int m =n;
    int a[1000];
    a[0] = 0;
    a[1] = 1;
    for(int i =2; i < n;i++)
    {
        a[i] = a[i-1] + a[i-2];
    }
    int b[1000];
    for(int i =0; i < m; i++)
    {
        cout<<"b["<<i<<"] = ";
        cin>>b[i];
    }
    xoamang(a,b,m);
    for(int i =0;i<m;i++)
    {
        cout<<b[i]<<" ";
    }
}
