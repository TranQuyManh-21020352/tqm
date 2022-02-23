#include<iostream>
#include<string>

using namespace std;

struct sv{
string hoten;
int namsinh;
double diemtb;

};

int main()
{
    double Max,Min;
    sv a[100];
    int n;
    cin>>n;
    for(int i =0 ;i<n;i++)
    {
        cin>>a[i].hoten;
    }
    for(int i =0 ;i<n;i++)
    {
        cin>>a[i].namsinh>>a[i].diemtb;
    }
    Max = a[0].diemtb;
    Min = a[0].diemtb;
    for(int i=0;i<n;i++)
    {
        if(a[i].diemtb > Max)
        {
            Max = a[i].diemtb;
        }
         if(a[i].diemtb < Min)
        {
            Min = a[i].diemtb;
        }
    }
    for(int i =0 ; i< n;i++)
    {
        if(a[i].diemtb == Max)
        {
            cout<<a[i].hoten<<endl;
            cout<<a[i].namsinh<<endl;
            cout<<a[i].diemtb<<endl;
        }
        if(a[i].diemtb == Min)
        {
            cout<<a[i].hoten<<endl;
            cout<<a[i].namsinh<<endl;
            cout<<a[i].diemtb<<endl;
        }
    }
}
