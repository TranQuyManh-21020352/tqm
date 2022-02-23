#include<iostream>
#include<string>
#include<cstring>

using namespace std;

struct mang{

int n;
int *arr;
mang(int _n,int volume)
{
    n = _n;
    arr = new int [n];
    for(int i= 0; i< n;i++)
    {
        arr[i] = volume+i;
    }
}
void print()
{
    for(int i = 0; i < n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

};

int main()
{
    int x,y;
    cin>>x>>y;
    mang a(x,y);
    mang *p = &a;
    (*p).print();
    return 0;
}

