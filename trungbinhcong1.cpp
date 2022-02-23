#include <iostream>
using namespace std;

int main()
{
    int n,s;
    float m=0;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n-2;i++)
    {
        s=a[i]+a[i+1]+a[i+2];
        if(s>m)
        {
            m=s;
        }
    }
    cout<<m/3<<endl;

}

