#include <iostream>
using namespace std;

int main()
{
       int n;
       cin>>n;
       int a[n];
       for(int p=n,i=1;i<=3;i++)
       {
           a[i]=p%10;
           p/=10;
       }
       if(a[1]>a[3])
       {
           cout<<"invalid"<<endl;
           return 0;
       }
     else if(a[1]-a[3]==-1)
     {
         cout<<"198"<<endl;
     }
     else
      cout<<"1089"<<endl;
      return 0;
}
