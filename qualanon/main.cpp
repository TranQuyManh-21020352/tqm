#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string s,c;
    getline(cin,s);
    getline(cin,c);
   ifstream file(s);
   ofstream ofile(c);
   while(!file.eof())
   {
       int n;
       file>>n;
       ofile<<"cap "<<n<<" la: "<<endl;
   for(int i = 0; i <= n; i++)
   {
       for(int j = 0; j <= n;j++)
       {
           if(2 * i + j == n)
           {
               ofile<<"("<<i<<";"<<j<<")"<<endl;
           }
       }
   }
}
}
