#include<iostream>

using namespace std;
int tong(int n)
{
    if(n==1 || n==2)
    return 1;

  return tong(n-1)+tong(n-2);
}
int main()
{
    int n;
    cin>>n;
    cout<<tong(n);

}
