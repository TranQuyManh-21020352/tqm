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
    string c = s;
    cout<<s<<endl;
    reverse(s.begin(),s.end());
    cout<<s<<endl;
    if(s == c)
    {
        cout<<"xau s la xau doi xung"<<endl;
    }
    else
    {
        cout<<"xau s khong la xau doi xung"<<endl;
    }
    reverse(s.begin(),s.end());
    for(int i =0 ; i < s.size();i++)
    {
        s[i] = toupper(s[i]);
    }
    cout<<s<<endl;
     for(int i =0 ; i < s.size();i++)
    {
        if(s[i] >=48 && s[i] <= 57)
        {
            d++;
        }
    }
    cout<<"xau s co: "<<d<<" ki tu la so"<<endl;
     for(int i =0 ; i < s.size();i++)
    {
        if(s[i] >=48 && s[i] <= 57)
        {
            d++;
        }
    }
    s[0] = toupper(s[0]);
    for(int i =1 ; i < s.size();i++)
    {
        s[i] = tolower(s[i]);
    }
    for(int i =1 ; i < s.size();i++)
    {
        if(s[i] == ' ' && i < s.size() -1)
        {
            s[i+1] = toupper(s[i+1]);
        }
    }
    cout<<s<<endl;
    int dem2 = 0;
    string m;
    getline(cin,m);
    for(int i =0; i < s.size(); i++)
    {
        int dem1=0;
        if(s[i] == m[0])
        {
            for(int j = 1; j< m.size();j++)
                {
                    if(s[i+j] != m[j] ){
                        dem1 = 0;
                        break;
                    }
                    else{
                        dem1 ++;
                    }
                }
        }
        if(dem1 != 0)
        {
            dem2 ++;
        }
    }
    cout<<"ten: "<<m<<" xuat hien "<<dem2<<" lan trong xau s"<<endl;
    int dem =0;
    for(int i =0; i < s.size(); i++)
    {
        if(s[i] == ' ')
        {
            int dem3 =0;
            for(int j = i+1; j<s.size();j++)
            {
                if(s[j] ==' ' )
                {
                    break;
                }
                dem3++;
            }
            if(dem3 == dem)
            {
                int h =-5,k=0;
                for(int j = i+1; j<=i+dem;j++)
            {
                if(s[j] != s[i-dem+k])
                {
                    h=0;
                    break;
                }
                k++;
            }
            if(h != 0)
            {
                for(int j = 0 ; j<=dem;j++)
                {
                    s.erase(i,1);
                }
                i--;
                dem --;
            }
            else{
                dem = -1;
            }

            }
            else {
                dem=-1;
            }
        }
        dem ++;
    }
    cout<<s<<endl;
}
