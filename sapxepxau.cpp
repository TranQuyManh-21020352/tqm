#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main()
{
    int d=0;
    string s;
    getline(cin,s);
    s[0] = toupper(s[0]);
    for(int i=s.size()-1;i>=0;i--)
    {
        if(s[i] == ' ')
        {
        for(int j= i+1; j < s. size() ; j++)
        {
           s[j] = tolower(s[j]);
        }
        break;

    }
    }
    for(int i=1;i<s.size();i++)
    {
        d++;
        if(s[i] == ' ')
        {
            s[i+1] = toupper(s[i+1]);
        for(int j= i-1; j >= i-d+1; j--)
        {
           s[j] = tolower(s[j]);
        }
        cout<<d<<endl;
        i = i + 1;
        d=0;
        }
    }
    cout<<s<<endl;

}
