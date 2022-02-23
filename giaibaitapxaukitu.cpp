#include<iostream>
#include<string>
#include<cctype>
#include<cstring>
#include<algorithm>

using namespace std;
/* xoa ki tu bat ki
void xoakitu(char *a, int m)
{
    int n= strlen(a);
    for(int i = m;i< n;  i++)
    {
        a[i] = a[i+1];
    }
  n--;
}
void sapxep(char *a, char c)
{
    for(int i = 0; i < strlen(a) ; i++)
    {
        if(a[i] == c)
        {
            xoakitu(a,i);
            i--;
        }
    }
}
int main()
{
    char a[100];
    cin.getline(a,100);
     string c;
     getline (cin,c);
    sapxep(a,c[0]);
    cout<<a<<endl;

}
int main()
{
    int d=0;
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    /*for(int i=0;i<s.size();i++)
    {
        if(s[i] == ' ')
        {
            s.erase(i,1);
              i--;
        }
    }
    s1=s1+s2;
    for(int i = 0; i < s1.size(); i++)
    {
        s1[i] = tolower(s1[i]);
    }
    cout<<s1<<endl;
}
*/
int main()
{
    int d=0;
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    for(int i=0; i< s2.size(); i++)
    {
        if(s2[i] == s1[0])
        {
            int d=1;
            for(int j=1;j<s1.size(); j++)
            {
                if(s1[j] != s2[i+j])
                {
                    d=1;
                    break;
                }
                else
                {
                    d++;
                }
            }
            if(d == s1.size())
            {
               cout<<"vi tri xuat hien cua s1 trong s2 la: "<<i<<endl;
            }
        }
    }

}
