#include<iostream>
#include<iomanip>

using namespace std;


int main()
{
     int n;
    cin>>n;
    unsigned long long int a[100000];
    for(unsigned long long int i =1; i <= n ;i++)
    {
     cin>>a[i];
    }
    if(n % 2 != 0)
    {
          unsigned long long int s = n/2 + 1;
        cout<<setprecision(1)<<fixed<<double(a[s])<<endl;
    }
    else{
        double s;
        s = (a[n/2] + a[n/2 + 1]) * 0.5;
        cout<<setprecision(1)<<fixed<<s<<endl;
    }
}
