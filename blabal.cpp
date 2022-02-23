#include <iostream>
using namespace std;
void nhap (int num[],int n)
{
    for(int i=1;i<=n;i++)
    {
    cin>>num[i];

    }
}
void chen (int num[],int &n,int pos)
{
    for(int i=pos;i<=n-1;i--)
    {


        num[i]=num[i+1];
    }

     n--;

}

void xuat (int num[],int n)
{
    for(int i=1;i<=n;i++)
    {
cout <<num[i]<<" ";

}
}
int main()
{
    int num[100];
    int n,pos;
    cin>>n;

   nhap(num,n);
   cin>>pos;
    chen(num,n,pos);
xuat(num,n);

}
