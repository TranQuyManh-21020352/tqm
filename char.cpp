/* xoa ki tư bat ki*/
#include<iostream>
#include<string>
#include<cstring>
using namespace std;
void xoa(char* S,int m)
    {
        int n=strlen(S);
        for(int i=m;i<n;i++)
        {
            S[i]=S[i+1];
        }
    }
void delete_char(char *S, char c)
{
    for(int i=0;i<strlen(S);i++)
    {
        if(S[i]==c)
        {
            xoa(S,i);
            i--;

        }
}

}

int main()
{
    char S[100];
    cin.getline(S,100);
    char c='a';
    delete_char(S,c);
    cout<<S<<endl;
}

