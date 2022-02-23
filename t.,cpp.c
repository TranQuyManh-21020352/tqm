#include <iostream>
using namespace std;

int main()
{
       int b,k,m,i=2500,j=3000,t,p;
      cin>>b,k,m;
      if(k<=17)
      {
          cout <<i*(k-b)*m<<endl;
      }
      else if(b<=17&&k>=17)
      {
          t=17-b;
          p=k-17;
            cout <<m*(i*t+j*p)<<endl;
      }
      else if(b>=17&&k>=17)
      cout<<j*(k-b)*m<<endl;
      return 0;
}
