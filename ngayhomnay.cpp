#include <iostream>
#include<string>
#include<cstring>

using namespace std;

int main()
{
    char c;
    int m =0;
 char s[100];
 cin.getline(s,100);
 int n = strlen(s);
 for(int i=0;i<n;i++)
 {
     int d=0;
     for(int j = 0; j < n; j++)
     {
         if(s[i] == s[j]  && j >= i)
         {
             d++;
         }
         else if(s[i] == s[j] && j<i)
         {
             d=0;
             break;
         }
     }
     if(d >= m)
     {
         c = s[i];
         m = d;
     }
 }
 cout<<"ki tu: "<<c<<" xuat hien nhieu nhat."<<endl;
 return 0;

}
