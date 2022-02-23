#include<iostream>
#include<string>

using namespace std;
bool isValid(string s)
{
    if(s.size() % 2 == 1)
    {
        return false;
    }
     if( s[0] - s[1] == -1 || s[0] -s[1] == -2 )
    {
        for(int i = 2; i < s.size() -1; i += 2)
        {
            if( s[i] - s[i+1] != -1 && s[i] - s[i+1] != -2 )
            {
                return false;
            }
        }
        return true;
    }
    if(s[0] - s[s.size()-1] == -1 || s[0] - s[s.size()-1] == -2 )
    {
        for(int i = 1; i< (s.size())/2; i++)
        {
            if(s[0] - s[s.size()-1] != -1 && s[0] - s[s.size()-1] != -2)
            {
                return false;
            }
        }
        return true;
    }
}
int main()
{

    string s;
    getline(cin,s);
    cout<<isValid(s);

}
