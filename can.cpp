#include <iostream>
#include<cmath>
#include <iomanip>
using namespace std;

int main()
{
    float s,n;
    cin>>n;
    s=sqrt(n);
    for(int i=n;i>=2;i--)
    {
        s=sqrt((i-1)+s);
    }

    cout<<setprecision(5)<<fixed<<s<<endl;



}





