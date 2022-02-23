#include<iostream>
#include<cstring>
#include<string>

 using namespace std;
 void xoa(char *s,int m)
 {
     int n = strlen(s);
     for(int i = m ; i < n; i++)
     {
         s[i] = s[i+1];
     }
 }
 void xoakitu(char*s)
 {
     for(int i = 0; i < strlen(s) ; i++)
     {
         if(s[i] == a)
         {
             xoa(char s,i);
             i--;
         }
     }
 }
int main()
{
    char a;
    cin>>a;
    char s[100];
    cin.getline(s,100);
    cout<<s<<endl;

}
