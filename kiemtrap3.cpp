#include<iostream>

using namespace std;

int main()
{

    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i =0; i < n;i++)
    {
        cin>>a[i];
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1;j < n;j++)
        {
            if(a[j] <= a[i])
            {
                 int d;
                 d =a[j];
                 a[j] = a[i];
                 a[i] = d;
            }
        }
    }
    int p =  a[n-m]-a[m-1];
    cout<<p<<endl;

}
void rotate(int *a , int n ,int d)
{

    for(int i =0;i<100;i++)
    {
        d = d % n;
        if(d<=n)
        {
            break;
        }
    }
    a[d] =1;
    for(int j=d+1;j<n;j++)
    {
        a[j] = a[j-1]+1;

    }
    a[0] = n+1-d;
    for(int i=1;i<d;i++)
    {
        a[i] = a[i-1]+1;
    }
}
void gold(int* a, int n, int d, int& result)
{
    result = 0;
    for(int i=0;i<n;i++)
    {
       if(*(a+i) > d)
       {
           result++;
       }
    }
}

