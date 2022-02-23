#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double a,b,c;
    cin>>a>>b>>c;

    if(a==0)
    {
        if(b==0)
        {

        if(c==0)
        cout <<"phuong trinh co vo so nghiem"<<endl;
        else if(c!=0)
        cout<<"phuong trinh vo nghiem"<<endl;
    }
       else
       {
           double d=-c/b;
           cout<<"phuong trinh co 1 nghiem"<<endl;
           cout <<setprecision(5)<<fixed<<d<<endl;
       }
}
else if(a!=0)
{
    double t=b*b-4*a*c;
    if(t<0)
    {
    cout <<"phuong trinh vo nghiem"<<endl;}
    else if(t==0)
    {
        float k=(-b)/(2*a);
        cout <<"phuong trinh co 1 nghiem"<<endl;
        cout <<setprecision(5)<<fixed<<k<<endl;
    }
    else
    {
    }
        double m,n;
        m=(-b-sqrt(t))/(2*a);
        n=(-b+sqrt(t))/(2*a);
        cout<<"phuong trinh co 2 nghiem"<<endl;
        cout <<setprecision(5)<<fixed<<m<<" "
         <<setprecision(5)<<fixed<<n;


}

}













