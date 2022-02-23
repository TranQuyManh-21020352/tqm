#include <iostream>
#include<string>
using namespace std;
int  main()
{
    int m,n;
    string s;
    getline(cin,s);
     cin>>m>>n;
    s.erase(m,n);
    cout<<s<<endl;
}
