#include <iostream>
#include <string>

using namespace std;

int main()
{
    /*string s;
    getline(cin,s);
    cout<<"xau s la: "<<endl;
    cout<<s<<endl;
    cout<<"xau s sau khi sua la: "<<endl;
    int d =0;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == ' ')
        {
            int k = 0;
            for(int j = i + 1; j< s.size(); j++)
            {
                if(s[j] == ' ')
                {
                    break;
                }
                k++;
            }
            cout<<d<<" "<<k<<endl;
            if(d != k)
            {
                d = -1;
            }
            else
            {
                int x = 0;
                for(int j = 1; j <= d;j++)
                {
                    if(s[i + j] != s[i + j - d - 1])
                    {
                        x = -4;
                        break;
                    }
                    x++;
                }
                if(x < 0)
                {
                    d = -1;
                }
                else
                {
                    for(int j = 0; j <= d; j++)
                    {
                        s.erase(i,1);
                    }
                    d--;
                    i--;
                }
            }
        }
        d++;
    }
    cout<<s<<endl;
    */
    char s[100];
    cin.getline(s,100);
    cout<<s<<endl;
}
