#include<iostream>

using namespace std;

struct phanso{
int a,b;
phanso(){}
phanso(int tuso,int mauso)
{
    a = tuso;
    b = mauso;
}
};
void tong(phanso v1,phanso v2)
{
    int x,y;
    x = v1.a * v2.b + v2.a * v1.b;
    y = v1.b * v2.b;
    int m;
    if(x>y)
    {
        for(int i=1;i<=y;i++)
        {
            if(x % i == 0 && y % i == 0)
            {
                m =  i;
            }
        }
    }
     else if(x<=y)
    {
        for(int i=1;i<=x;i++)
        {
            if(x % i == 0 && y % i == 0)
            {
                m =  i;
            }
        }
    }
    if(y/m == 1)
    {
        cout<<x/m<<endl;
    }
    else{
        cout<<x/m<<"/"<<y/m<<endl;
}
}
int main()
{
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    phanso v1(x1,y1),v2(x2,y2);
    tong(v1,v2);
    return 0;
}
