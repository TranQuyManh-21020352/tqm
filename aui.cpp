#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   int n;

   do
   {    cin>>n;
       if(n>=0&&n%5==0)
       cout <<n/5<<endl;
       else if((n%5!=0&&n!=-1))

       cout <<"-1"<<endl;
        else if(n<0&&n!=-1)
             cout <<"-1"<<endl;

   }
while(n!=-1);
{
    cout<<"bye"<<endl;
}
return 0;
}
