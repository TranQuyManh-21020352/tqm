#include<iostream>
#include<cmath>
using namespace std;

class toado
{

    double x;
    double y;
    public:
     toado()
    {

    }
    toado(double hoanhdo,double tungdo)
    {
        x =  hoanhdo;
        y =  tungdo;
    }
    void xuat_toa_do()
{
    cout<<"("<<x<<","<<y<<")"<<endl;
}
toado tong(toado other)
{
    toado sum;
    sum.x= x+other.x;
    sum.y= y+other.y;
    return sum;
}

friend void xuat_do_dai(toado v1,toado v2);
};
void xuat_do_dai(toado v1,toado v2)
{
    if(sqrt((v1.x-v2.x)*(v1.x-v2.x) + (v1.y-v2.y)*(v1.y- v2.y)) != 0)
    cout<<sqrt((v1.x-v2.x)*(v1.x-v2.x) + (v1.y-v2.y)*(v1.y- v2.y))<<endl;
    else
        cout<<"trung nhau mat roi"<<endl;
}

int main()
{
    double x,y,t,z;
    cin>>x>>y>>t>>z;
    toado decard(x,y);
    toado decard2(t,z);
   xuat_do_dai(decard,decard2);
  return 0;
}
