#include <iostream>
#include <string>

using namespace std;
int main()
{

    string a,b;
    getline(cin,a);
    getline(cin,b);

    if(a.size()>b.size())
    cout<<"NO"<<endl;
    else
    {
        for(int i=0;i<b.size();i++)
        {
            int d=0;
            if(b[i]==a[0])
            {
                d=1;
                for(int j=1;j<a.size();j++)
                {
                    if(a[j]==b[i+j])
                    {
                        d++;
                    }
                    else
                    {
                        break;
                    }
                }
            }
            if(d==a.size())
            {

                cout<<"YES"<<endl;
                return 0;
            }
        }
        cout<<"NO"<<endl;
    }
}








