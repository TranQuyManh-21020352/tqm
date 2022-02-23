#include <iostream>
using namespace std;

int main()
{
   string a,b="B",fn="BA";

   int n;
   cin>>n;
   if(n==1)
    cout<<"A"<<endl;
   else if(n==2)
    cout<<"B"<<endl;
   else if(n==3)
    cout<<"BA"<<endl;
   else{
   for(int i=4;i<=n;i++)
   {

       a=b;
       b=fn;
       fn=b+a;
   }
   cout<<fn<<endl;

return 0;
}
}
