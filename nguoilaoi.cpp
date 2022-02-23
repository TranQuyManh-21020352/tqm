#include <iostream>
using namespace std;

int main()
{
    int n,i=1;
    cin>>n;
    while (i<=n)
    {


        if (i*i==n)
        {

            cout <<"yes"<<endl;
            return 0;
        }
      if(i*i!=n)
      {

            cout <<"no"<<endl;
            return 0;

      }
      i++;
        }



cout <<"no"<<endl;

}


