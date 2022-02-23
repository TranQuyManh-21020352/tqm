#include<iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int d =0;
    for(int i = a+1;i<b;i++)
    {
        if(i % 2 != 0 && i % 5 == 0)
        {
            d++;
        }
    }
    cout<<d<<endl;
}
