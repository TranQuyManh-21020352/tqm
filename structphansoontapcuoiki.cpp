#include<iostream>

using namespace std;

struct phanso{
int a,b;
phanso(){}
phanso(int _tuso,int _mauso)
{
    a = _tuso;
    b = _mauso;
}
void print()
{
    cout<<a<<"/"<<b<<endl;
}
};
phanso operator+(phanso v1,phanso v2)
{
    int tuso = v1.a * v2.b + v2.a * v1.b;
    int mauso = v1.b * v2.b;
    int m;
    if(tuso == 0)
    {
        phanso tong(0,1);
        return tong;
    }
     else if(abs(tuso) > abs(mauso))
    {
        for(int i=1;i<=abs(mauso);i++)
        {
            if(tuso % i == 0 && mauso % i == 0)
            {
                m =  i;
            }
        }
    }
     else if(abs(tuso) <= abs(mauso))
    {
        for(int i=1;i<=abs(tuso);i++)
        {
            if(mauso % i == 0 && tuso % i == 0)
            {
                m =  i;
            }
        }
    }
    tuso /= m;
    mauso /= m;
    phanso tong(tuso,mauso);
    return tong;
}
phanso operator-(phanso v1,phanso v2)
{
    int tuso = v1.a * v2.b - v2.a * v1.b;
    int mauso = v1.b * v2.b;
    int m;
    if(tuso == 0)
    {
        phanso hieu(0,0);
        return hieu;
    }
     else if(abs(tuso) > abs(mauso))
    {
        for(int i=1;i<=abs(mauso);i++)
        {
            if(tuso % i == 0 && mauso % i == 0)
            {
                m =  i;
            }
        }
    }
     else if(abs(tuso) <= abs(mauso))
    {
        for(int i=1;i<=abs(tuso);i++)
        {
            if(mauso % i == 0 && tuso % i == 0)
            {
                m =  i;
            }
        }
    }
    tuso /= m;
    mauso /= m;
    phanso hieu(tuso,mauso);
    return hieu;
}

int main()
{
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    phanso v1(x1,y1),v2(x2,y2);
    phanso sum = v1 + v2;
    phanso hieu = v1 - v2;
    sum.print();
    hieu.print();
    return 0;
}
