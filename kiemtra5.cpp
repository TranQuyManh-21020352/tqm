
/*
template <class T>
bool amazingOdd(T n)
{
    if(n % 2 == 1)
    {
        return true;
    }
    else{
        return false;
    }
}
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(amazingOdd(n) == true)
    {
        cout<<"co"<<endl;
    }
    else{
        cout<<"khong"<<endl;
    }
}
*/
#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[1000];
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    if(a[1] > a[0])
    {
        for(int i =1; i<n;i++)
        {
            for(int j =i+1;j<n;j++)
            {
                if(a[j]<=a[i])
                {
                    cout<<"khac"<<endl;
                    return 0;
                }

            }
        }
        cout<<"tang"<<endl;
    }
    else if(a[0] > a[1])
    {
         for(int i =1; i<n;i++)
        {
            for(int j =i+1;j<n;j++)
            {
                if(a[j]>=a[i])
                {
                    cout<<"khac"<<endl;
                    return 0;
                }

            }
        }
        cout<<"giam"<<endl;
    }
    else
    {
        cout<<"khac"<<endl;
    }
}
