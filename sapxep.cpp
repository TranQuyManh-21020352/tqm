#include<iostream>

using namespace std;
int main()
{

    int a[100];
    for(int i=0;i<7;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<7;i++)
    {
        for(int j=i+1;j<7;j++)
        {
            if(a[j]<a[i])
            {
                swap(a[j],a[i]);
            }
        }
    }
    for(int i=0;i<7;i++)
    {
        cout<<a[i]<<" ";
    }
}
