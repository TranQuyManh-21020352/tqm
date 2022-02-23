#include<iostream>

using namespace std;

int UCLN(int x,int y)
{
    while(x != y)
    {
        if(x > y)
        {
            x = x - y;
        }
        else
        {
            y = y - x;
        }

    }

    return x;
}

int main()
{
    int ucln,bcnn;
    cin>>ucln>>bcnn;
    for(int i = 1; i <= (ucln * bcnn);i++)
    {
        for(int j = 1; j <= ucln * bcnn;j++)
        {
            if(i * j == ucln * bcnn && UCLN(i,j) == ucln  )
            {
                cout<<i<<" "<<j<<endl;
            }
        }
    }
}
