#include <iostream>
#include <fstream>
using namespace std;
bool snt(int n)
{
    if(n<2)
    {
        return false;
    }
     else if(n==2)
     {
         return true;
     }
     else if(n>2)
     {
         for (int i=2;i<n;i++)
         {
             if(n%i==0)
             {
                 return false;
             }
         }
         return true;
     }
}


int main()
{
    int n,d=0;
    int i=1;
    int a[100];
    ifstream in;
    snt(n);
    in.open("tata.txt",ios_base::in);
    if(!in)
    {
        cout<<"thanh cong roi day "<<endl;
    }
   while(!in.eof())
   {
       in>>a[i];
       i++;
       d++;
   }
cout<<d<<endl;
    ofstream out;
    out.open("kiemtra.txt",ios_base::out);
    for(int i=1;i<=d;i++)
    {
        if(snt(a[i])==true){
            out<<a[i]<<" ";
            cout<<a[i]<<" ";
    }

    }
    in.close();
    out.close();
    return 0;
}
