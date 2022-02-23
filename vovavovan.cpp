#include <iostream>
#include<string>

using namespace std;

int main()
{
    string s,p;
    getline(cin,s);
    for(int i =0; i<s.size();i++)
    {
        p = p +s[i];
    }
    cout<<p<<endl;
   if(s == p)
   {
       cout<<"like"<<endl;
   }
}
