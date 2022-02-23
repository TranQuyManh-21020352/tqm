#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s="";
    while(n)
    {
        if(n%2==0)
        {
            s=s+"0";
        }
        else{
            s=s+"1";
        }
        n/=2;
    }
    reverse(s.begin(),s.end());
    cout<<s<<endl;


}
