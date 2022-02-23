#include<iostream>
#include<string>
#include<cctype>
#include<cstring>
#include<algorithm>

using namespace std;

 void daoxau(string s,char *ketqua)
{
    int h=0,d =0;
    for(int i= s.size() -1; i>=0; i--)
    {
        d++;
        if(s[i] == ' ')
        {
            for(int k = i + 1; k<i+d; k++)
            {
                ketqua[h] = s[k];
                h++;
            }
             ketqua[h]=' ';
               h++;
               d=0;
        }
        if(i == 0)
        {
            for(int j=0 ; j<d;j++)
            {
                ketqua[h] = s[j];
                h++;
            }
        }
}

}
int main()
{

    string s;
    getline(cin,s);
    char ketqua[100];
    daoxau(s,ketqua);
    cout<<ketqua<<endl;

}
