#include <iostream>
using namespace std;

int main()
{
    int a[100];
    int x,y;
    cin>>x>>y;
     unsigned long long int s=0;
    for(int i=x;i<=y;i++)
    {
        if(i%13!=0)
        {
            s=s+i;
        }

    }
    cout<<s<<endl;
}
