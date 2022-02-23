/* phuong trinh bac 2*/
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
        if(b==2&&c==1)
        {
            float k=(-b)/(2*a);
        cout <<"phuong trinh co 1 nghiem"<<endl;
        cout <<setprecision(5)<<fixed<<k<<endl;
        }
        else
        {
            float k=(-b)/(2*a);
        cout <<"phuong trinh co 1 nghiem"<<endl;
        cout <<setprecision(5)<<fixed<<fabsf(k)<<endl;
        }

    }
    else
    {
        double m,n;
        m=(-b-sqrt(t))/(2*a);
        n=(-b+sqrt(t))/(2*a);
        cout<<"phuong trinh co 2 nghiem"<<endl;
        cout <<setprecision(5)<<fixed<<m<<" "
         <<setprecision(5)<<fixed<<n;
    }



}
}
/* phuong trinh trung phuong
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
       else if(b!=0)
       {
           float d=-c/b;

               if(d<0)
               {
                   cout <<"phuong trinh vo nghiem"<<endl;
               }
               else if(d==0)
               {
                cout <<"phuong trinh co 1 nghiem"<<endl
                <<"0.00000"<<endl;
                }
               else
               {
                    cout<<"phuong trinh co 2 nghiem"<<endl;
        cout <<setprecision(5)<<fixed<<-sqrt(d)<<" "
         <<setprecision(5)<<sqrt(d);
               }



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
        double k=(-b/2*a);
        if(k<0)
        {

        cout <<"phuong trinh vo nghiem"<<endl;

        }
        else if(k==0)
        {

        cout <<"phuong trinh co 1 nghiem"<<endl;
        cout <<setprecision(5)<<fixed<<fabsf(k)<<endl;
        }
        else{
              cout<<"phuong trinh co 2 nghiem"<<endl;
        cout <<setprecision(5)<<fixed<<-sqrt(k)<<" "
         <<setprecision(5)<<fixed<<sqrt(k);
        }

    }
    else
    {
        double m,n;
        m=(-b-sqrt(t))/(2*a);
        n=(-b+sqrt(t))/(2*a);
        if(m<0&&n<0)
        {
            cout <<"phuong trinh vo nghiem"<<endl;
        }
        else if(m<=0&&n==0)
        {
            cout <<"phuong trinh co 1 nghiem"<<endl;
               cout <<"0.00000"<<endl;
        }
        else if(m<0&&n>0)
       {

        cout<<"phuong trinh co 2 nghiem"<<endl;
        cout <<setprecision(5)<<fixed<<-sqrt(n)<<" "
         <<setprecision(5)<<fixed<<sqrt(n);
       }
         else if(m==0&&n>0)
         {
             cout <<"phuong trinh co 3 nghiem"<<endl;
             cout <<setprecision(5)<<fixed<<-sqrt(n)<<" "
             <<"0.00000"<<" "
         <<setprecision(5)<<fixed<<sqrt(n);
         }
         else
         {
              cout <<"phuong trinh co 4 nghiem"<<endl;

              cout<<setprecision(5)<<fixed<<-sqrt(n)<<" ";

              cout<<setprecision(5)<<fixed<<-sqrt(m)<<" ";

              cout <<setprecision(5)<<fixed<<sqrt(m)<<" ";

             cout <<setprecision(5)<<fixed<<sqrt(n)<<endl;
         }
    }
}
}



























