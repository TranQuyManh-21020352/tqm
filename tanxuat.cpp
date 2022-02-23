#include <iostream>
#include<string>

using namespace std;

int main()
{
    string s;
    getline(cin,s);
    for(int i=0;i<s.size();i++)
    {
        int  d=0;
        for(int j=0;j<s.size();j++)
        {
            if(s[j]==s[i] && i<=j )
            {
                d++;
            }
            else if(s[j]==s[i] && i>j)
            {
                break;
            }

        }
        if(d!=0)
        {
            cout<<s[i]<<" xuat hien "<<d<<" lan"<<endl;
        }
    }
    return 0;
}
