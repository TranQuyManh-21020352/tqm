#include <iostream>
using namespace std;

int main()
{
    int a=1,b=1,fn=1, n;
    cin >>n;
    if (n==1||n==2)




        cout <<1<<endl;
    else{{
        for(int i=1;i<= n-2;i++)
    {
       a=b;
       b=fn;
       fn=a+b;


    }
    cout <<fn<<endl;
}
    }
}
