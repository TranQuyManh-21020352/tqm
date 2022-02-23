#include <iostream>
#include<string>

using namespace std;
void printArrow(int n, int left)
{
    int k=0;
    string s;
    if(left == 0 ){
 for(int i=0;i<n;i++)
 {
     s = s+ "*";
 }
 for(int i = n;i<2*n-1;i++)
 {
     s = s+" ";
 }
 cout<<s<<endl;
 for(int i=1;i<n;i++)
 {
     for(int j=0;j<=i*2-1;j++)
     {
         s[j] = ' ';
     }
     s[n-1+i]='*';
     cout<<s<<endl;
 }
 for(int i = n-1;i>=1;i--)
 {

      for(int j=2*i-1;j>=2*i-2;j--)
     {
         s[j]='*';
     }
    s[2*(n-1)-k]= ' ';
    k++;
   cout<<s<<endl;
 }

}
else
    {
     for(int i=0;i<n-1;i++)
 {
     s = s+ " ";
 }
 for(int i = n-1;i<2*n-1;i++)
 {
     s = s+"*";
 }
 cout<<s<<endl;
 for(int i = 1;i<n;i++)
 {
      for(int j=2*n-2;j>2*n-2-i*2;j--)
     {
         s[j]=' ';
     }
     s[n-1-i]= '*';

   cout<<s<<endl;
 }
 for(int i =0;i<n-1;i++)
 {
     s[i] =' ';
    for(int j=i*2+1;j<i*2+3;j++)
    {
        s[j] = '*';
    }
    cout<<s<<endl;
 }

    }
}
int main()
{
    int a,b;
    cin>>a>>b;
    printArrow(a,b);
    return 0;
}
