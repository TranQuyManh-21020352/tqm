#include <iostream>
#include<cmath>
using namespace std;
int sochinhphuong(int n)
{
    for(int i=1;i<=sqrt(n);i++)
    {
        if(i*i==n)
        return 1;

    }
    return 0;

}
int main()
{
    int n;
    cin>>n;
   if(sochinhphuong(n)==1)
   {
       if(n%3==0 && n%5==1)
       {

           cout<<"YES"<<endl;
       }
       else
        cout<<"NO"<<endl;
   }
   else
   {
       cout<<"NO"<<endl;
   }
}

