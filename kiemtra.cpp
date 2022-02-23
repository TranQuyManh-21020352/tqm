#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int c=0,l=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            c=c+a[i];
        }
        else if(a[i]%2==1)
        {
            l=l+a[i];
        }
    }

    if(c==0)
    {
        cout<<"None"<<endl;
    }
    else
    {
        cout<<c<<endl;
    }
    if(l==0)
        cout<<"None"<<endl;
        else
        {
            cout<<l<<endl;
        }
}
