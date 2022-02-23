#include<iostream>

using namespace std;

int main()
{
    int nghin;
    int n;
    cin>>n;
    int g=n;
   int d=0,s=0;
    while(g != 0)
    {
        int p = g%10;
        g /= 10;
        d++;
        s=s+p;
    }
    cout<<"so "<<n<<" co "<<d<<" chu so"<<endl;
    cout<<"tong cac chu so cua so "<<n<<" la: "<<s<<endl;

    while(p != 0)
    {
        int h = p % 10;
        dao = dao *10 + h;
        p /= 10;
    }
    cout<<"so dao nguoc cua so "<<n<<" la: "<<dao<<endl;
    if(dao - n == 0)
    {
        cout<<"so "<<n<<" la so doi xung"<<endl;
    }
    else
    {
         cout<<"so "<<n<<" khong la so doi xung"<<endl;
    }
    if(n < 1000)
    {
        cout<<n<<" khong co hang phan nghin"<<endl;
    }
    else
    {
        int c =n;
        for(int i =0; i < 4 ;i++)
        {
            nghin = c % 10;
            c = c/10;
        }
        cout<<"chu so hang phan nghin cua so "<<n<<" la: "<<nghin<<endl;
    }
}
