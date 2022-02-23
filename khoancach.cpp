#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    float a,b,c;
    double d,e,f;
    cin>>a>>b>>c;
    d=a+b+c;
    e=d/3;
    f=a*b*c;
    cout <<d<<endl;
   cout<<setprecision(2) <<fixed<<e<<endl;
    cout<<setprecision(0) <<fixed<<f<<endl;
    return 0;
}

