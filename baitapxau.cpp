#include<iostream>
#include<string>

using namespace std;

int main()
{
    int d =0;
    string s,p;
    getline(cin,s);
    string c;
    getline(cin,c);
    p = s;
    for(int i =0 ; i < s.length() ; i++)
    {
        if(s[i] == c[0])
        {
            d =1;
            for(int j = 1 ; j < c.length() ; j++)
            {
                if(s[i+j] == c[j])
                {
                    d++;
                }
                else
                {
                    d=1;
                    break;
                }
            }
             if(d == c.length())
        {
            for(int j = 0; j< c.length() ; j++)
            {
                s.erase(i,1);
            }

         i--;
        }



        }
    }
    cout<<s<<endl;
    return 0;
}
