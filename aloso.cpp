
#include <iostream>
#include <string>
#include <iomanip>


using namespace std;

int main()
{
    int n;
    double e=0,d=0;
    cin>>n;
    double angles[n];
    for(int i=1;i<=n;i++)
    {
        cin>>angles[i];
        d=d+angles[i];
    }
    float c=d/n;
   cout <<setprecision(2)<<fixed<<c<<endl;
   int m=angles[1];
    for(int i=2;i<=n;i++)
    {

        if(angles[i]>=m)
            m=angles[i];
    }
    double mm=angles[1];
    for(int i=2;i<=n;i++)
    {

        if(angles[i]<=mm)
            mm=angles[i];

    }

   cout <<m<<endl;
   cout <<mm<<endl;




    return 0;

}

