#include<iostream>

using namespace std;
 bool isHappyNumber(int n)
{

    int k=n;
    for(int i=1;i<20;i++)
    {
        int h=0;
        for(int j=0;j<10;j++)
        {
            int p=k%10;
            h=h+p*p;
            k/=10;
            if(k==0)
            {
                break;
            }
        }
        cout<<h<<endl;
        if(h==1)
        {
            return true;
        }
        else
        {
            k=h;
        }
    }
    return false;
}

int main()
{

    int n;
    cin>>n;
    cout<<isHappyNumber(n);
}
