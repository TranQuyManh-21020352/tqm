#include<iostream>
#include<fstream>
#include<string>
#include<cctype>

using namespace std;

/*bool songuyento(int n)
{
    if(n < 2)
        return false;
    else if(n == 2)
        return true;
    else
    {
        for(int i =2; i < n;i++)
        {
            if(n % i == 0)
            {
                return false;
            }
        }
        return true;
    }
}
*/
int main()
{
     int n=0;
     string s;
     getline(cin,s);
     ifstream file(s);
     ofstream outfile("2.txt");
     int d =0;
     while(!file.eof())
     {
        string a;
        getline(file,a);
        for(int i = 0; i < a.size(); i++)
        {
            a[i] = tolower(a[i]);
        }
        for(int i = 0; i < a.size(); i++)
        {
            if(a[i] == '.' || a[i] == ' ')
            {
                a[i+1] = toupper(a[i+1]);
            }
        }
        for(int i =0; i < a.size();i++)
        {
            if(a[i] == 'a' || a[i] == 'A')
            {
                d++;
            }
        }
        cout<<a<<endl;
        outfile<<a<<endl;

     }
cout<<d<<endl;
     /*ifstream infile("3.txt");
     ofstream ofile("4.txt");
     while(!infile.eof())
     {
         int n;
         infile>>n;
         char k;
         infile>>k;
         string ho;
         getline(infile,ho,',');
         string ten;
         getline(infile,ten,',');
         float d1,d2;
         char c;
         infile>>d1>>c>>d2;
         if(d1 >= 7 && d2 >= 8 )
         {
             cout<<ho<<" "<<ten<<endl;
         }

     }
  infile.close();
  ofile.close();
  */
}
