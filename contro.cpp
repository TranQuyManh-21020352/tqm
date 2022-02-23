#include <iostream>
using namespace std;

void nhap(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
       cin>>a[i];
    }

}
int kiemtra(int n)
{
    if(n%3==0)
        return 0;
    else
        return 1;
}
void check(int a[],int n)
{
    for(int i=0;i<n;i++){
    if(kiemtra(a[i])==0)
    cout<<"a["<<i<<"]="<<a[i]<<" ";

    }
}
int main()
{
    int n;
    cin>>n;
  int a[n];
  nhap(a,n);
  kiemtra(n);
  check(a,n);
  return 0;

}
