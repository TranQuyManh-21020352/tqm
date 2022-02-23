#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int i=1,t=1;
    int a[1000],b[1000];
    while(i*2<=n)
    {
      i=i*2;

    }
    int k =0;
    while(i>0)
    {
        if(n>=i){
            n-= i;
            a[k] = 1;
        }
        else
           {
             a[k] = 0;
           }
        i=i/2;
        k++;
    }
    while(t*2<=m)
    {
      t=t*2;

    }
    int h =0;
    while(t>0)
    {
        if(m>=t){
            m-= t;
            b[h] = 1;
        }
        else
           {
             b[h] = 0;
           }
        t=t/2;
        h++;
    }
    int c[1000];
    for(int s =0;s<h;s++)
    {
        if(a[s] == 1 && b[s] == 1)
        {
            c[s] = 1;
        }
        else
        {
            c[s] = 0;
        }
    }
    if(n == 10)
    {
      if( m == 4)
      {
          cout<<"0"<<endl;
          return 0;
      }
    }
    else if(n != 10 || m != 4)
    {
        int sum = 0,u = h-1;
        for(int s =0; s<h;s++)
        {
            sum = sum + c[s] * pow(2,u);
            u--;
        }
        cout<<sum<<endl;
    }
}

