#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
int main ()
{int n;
string s,c;
cin>>s;
cin>>n>>c;


s.replace(n,1 , c);
cout << s << endl;

}
