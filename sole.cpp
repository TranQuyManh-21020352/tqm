#include <iostream>
#include <cmath>
using namespace std;


int dem1 (int a[],int n)
{
    int d1=0;
    for(int i=1;i<=n;i++)
    {
        if(a[i]%2==0){
            d1++;

    }

}
  return d1;
}
int dem2 (int a[],int n)
{
    int d2=0;
    for(int i=1;i<=n;i++)
    {
        if(a[i]%2==1){
            d2++;

    }
}
 return d2;
}
 void nhap(int a[],int n)
{
    for(int i=1;i<=n;i++)
    {
    cin>>a[i];
    }
}

void xuat1(int b[],int a[],int n)
{
    for(int i=1;i<=dem1(a,n);i++)
        cout<<b[i]<<" ";
}
void xuat2(int c[],int n,int a[])
{
    for(int i=1;i<=dem2(a,n);i++)
        cout<<c[i]<<" ";
}

int phantuchan(int n)
{
    if(n%2==1)
        {
        return 0;
        }
        return 1;

}
void loc(int a[],int b[],int c[],int n)
{
    for(int p=1,k=1,i=1;i<=n;i++)
    {
        if(phantuchan(a[i])==1)
        {
            b[p]=a[i];
            p++;

        }
        else if(phantuchan(a[i])==0)
        {
            c[k]=a[i];
            k++;

        }
    }

}
void sapxep1(int b[],int a[],int n)
{

        for(int i=1;i<=dem1(a,n);i++)
        {

                for(int j=i+1;j<=dem1(a,n);j++)
                {
                    if(b[j]<b[i])
                        swap(b[i],b[j]);
                }

        }
}
void sapxep2(int c[],int a[],int n)
{

        for(int i=1;i<=dem2(a,n);i++)
        {

                for(int j=i+1;j<=dem2(a,n);j++)
                {
                    if(c[j]>c[i])
                        swap(c[i],c[j]);
                }

        }
}
int main()
{
    int n,d1,d2;
    cin>>n;
    int a[n];
    int b[100],c[100];
    nhap(a,n);
    dem1(a,n);
    dem2(a,n);
    phantuchan(n);
    loc(a,b,c,n);
sapxep1(b,a,n);
sapxep2(c,a,n);
xuat1(b,a,n);
xuat2(c,n,a);

    return 0;
}
