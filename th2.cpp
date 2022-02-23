#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
   double a,b,c;
   cin>>a>>b>>c;
   if(a <= 0 || b <= 0 || c <= 0)
   {
       cout<<"invalid"<<endl;
       return 0;
   }
   if(a + b >c && a + c > b && b + c > a)
   {
   double p;
   p = (a + b + c) / 2;
   double s = sqrt(p * (p - a) * (p - b) * (p - c));
   cout<<setprecision(2)<<fixed<<s<<endl;
   }
   else
   {
       cout<<"invalid"<<endl;
   }
   return 0;
}
