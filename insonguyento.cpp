#include <iostream>
using namespace std;

int main()
{
    int n,d=0;
    cin>>n;
    int num[n];
    for(int i=1;i<=n;i++)
    {
        cin>>num[i];
    }
    for(int i=1;i<=n;i++)
    {
        for(int k=2;k<num[i];k++)
        {


             if(num[i]%k==0){
            d++;
             }

        }
        if(d==0)
            {
                cout <<num[i]<<endl;
            }
d=0;
    }

}
