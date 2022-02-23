#include<iostream>

using namespace std;
bool chanle(int a)
{
    if(a % 2 == 0)
        return true;
    else
        return false;
}
bool songuyento(int n)
{
    if(n < 2)
    {
        return false;
    }
    else if(n == 2)
    {
        return true;
    }
    else
    {
        for(int i =2 ; i < n; i++)
        {
            if(n % i == 0)
            {
                return false;
            }
        }
        return true;
    }
}
int main()
{
    int n;
    cin>>n;
    if(chanle(n) == true)
    {
        cout<<n<<" la so chan"<<endl;
    }
    else
    {
         cout<<n<<" la so le"<<endl;
    }
    if(songuyento(n) == true)
    {
        cout<<n<<" la so nguyen to"<<endl;
    }
    else
    {
        cout<<n<<" khong la so nguyen to"<<endl;
    }
}
