#include<iostream>
#include<string>
#include<cstring>

using namespace std;

int main()
{

    char c;
    cin>>c;
    int n;
    cin>>n;
    cout<<"CHUC MUNG NGAY NHA GIAO VIET NAM !"<<endl;
    char s[100];
    int m=n/2;
    for(int i=0;i<n;i++)
    {
        s[i]=c;
    }
    cout<<s<<endl;
    for(int i=1;i<=m;i++)
    {
        for(int i=0;i<strlen(s);i++)
        {
            if(s[i]==c)
            {
                s[i]=' ' ;
                break;
            }
        }
        for(int i=strlen(s)-1;i>=0;i--)
        {
            if(s[i]==c)
            {
                s[i]=' ';
                break;
            }
        }
        cout<<s<<endl;
    }



}
