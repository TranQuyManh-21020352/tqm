#include<iostream>
#include<string>
#include<algorithm>
#include<cctype>

using namespace std;

int main()
{
    int d =0;
    string s;
    getline(cin,s);
    for(int i =0; i < s.size();i++)
    {

       if(s[i]==' ')
       {
           cout<<d<<endl;
           break;
       }
       d++;
    }
}
