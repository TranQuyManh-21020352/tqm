#include <iostream>
using namespace std;
void nhap(int a[],int b[],int na,int nb)
{
    for(int i=0;i<na;i++)
    {
        cin>>a[i];
    }
    {
        for(int i=0;i<nb;i++)
        {
            cin>>b[i];
        }
    }
}
void chen(int a[],int b[],int &na,int nb,int p)
{
    for(int i=na+nb-1;i>=nb+p;i--)
    {
        a[i]=a[i-nb];
    }
    for(int i=0;i<nb;i++)
    {
        a[p+i]=b[i];
    }

    na=na+nb;

}
void xuat(int a[],int na)
{
    for(int i=0;i<na;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int na,nb,p;
    cin>>na>>nb>>p;
    int a[100],b[100];
    nhap(a,b,na,nb);
    chen(a,b,na,nb,p);
    xuat(a,na);
    return 0;

}

