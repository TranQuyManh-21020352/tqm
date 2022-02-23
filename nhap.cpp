#include <iostream>

using namespace std;

int main()
{
     int n=0,p,s=0;
     cin >>p;
     while(n<=p)
     {

         s+=n;
         n=n+1;
     }

     cout << s << endl;

}
