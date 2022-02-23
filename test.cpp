#include <iostream>
using namespace std;

int main()
{
       int n;
       cin>>n;
       int a=n/100;
       int b=(n-a*100)/10 ;
       int c=n-a*100-b*10;
       if(a-c<0)
       {
           cout <<"invalid"<<endl;
       }
       else
      {
        int d=c*100+b*10+a;
        int e=n-d;
         int f=e/100;
       int g=(e-f*100)/10 ;
       int h=e-f*100-g*10;
         int i=h*100+g*10+f;
         cout <<e+i<<endl;

      }

}
