#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;

int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    double d=b*b-4*a*c;
    if(a==0)
    {
        if(b==0)
        {
            if(c==0)
                cout<<"phuong trinh co vo so nghiem "<<endl;
            else
                cout<<"phuong trinh vo nghiem "<<endl;
        }
        else{
            if(c==0)
                cout<<"phuong trinh co mot ngiem la: 0"<<endl;
            else
                 cout<<"co mot nghiem la: "<<(-c)/b<<endl;
        }

    }
    else
    {
        if(d<0)
        {
            cout<<"phuong trinh vo nghiem"<<endl;
        }
        else if(d==0)
        {
            cout<<"phuong trinh co nghiem kep la: "<<(-b)/(2*a)<<endl;
        }
        else
        {
            cout <<"phuong trinh co hai nghiem la:"<<setprecision(3)<<fixed<<(-b-sqrt(d))/(2*a)<<" va ";
            cout<<setprecision(5)<<fixed<<(b-sqrt(d))/(2*a)<<endl;
        }
        }
    }

