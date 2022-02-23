#include <iostream>
#include<string>
#include<iomanip>
#include<fstream>

using namespace std;

int main()
{
    char p;
    double a,b,c,d;
    string s,m,n,k,i,j,s1,s2,s3,s4;
    getline(cin,s);
    ifstream file(s);
     getline(file,m);
     file.ignore();
     getline(file,s1,' ');
     file>>a;
     cout<<setprecision(2)<<fixed<<a*a<<endl;
      file.ignore();
      file.ignore();
      getline(file,n);
      file.ignore();
     getline(file,s2,' ');
     file>>b;
     file>>p;
     getline(file,s3,' ');
     file>>c;
     cout<<setprecision(2)<<fixed<<b*c<<endl;
       file.ignore();
       file.ignore();
       getline(file,k);
       file.ignore();
       getline(file,s4,' ');
       file>>d;
     cout<<setprecision(2)<<fixed<<3.14 * d *2<<endl;
}
