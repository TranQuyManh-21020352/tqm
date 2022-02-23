#include <iostream>
using namespace std;
void nhap (int num[],int n)
{
    for(int i=1;i<=n;i++)
    {
cin>>num[i];

}
}
void chen (int num[],int &n)
{
    for(int i=1;i<=n;i++)
    {

      for(int j=i+1;j<=n;j++)
      {
          if(num[j]>num[i])
          {
              int t=num[j];
              num[j]=num[i];
              num[i]=t;
          }
      }

    }



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
    int n;
    cin>>n;

   nhap(num,n);

    chen(num,n);
xuat(num,n);

}

