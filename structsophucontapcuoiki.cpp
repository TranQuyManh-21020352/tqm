#include<iostream>

using namespace std;

struct sophuc{
    double a,b;
    sophuc (){}
    sophuc(double _thuc,double _ao)
    {
        a = _thuc;
        b = _ao;
    }
    void print()
    {
        if(b > 0)
        {
            if(b == 1)
            {
                if(a == 0)
                {
                    cout<<"i"<<endl;
                }
                else{
                    cout<<a<<"+i"<<endl;
                }
            }
            else {
                if(a == 0)
                {
                    cout<<b<<"i"<<endl;
                }
                else{
                    cout<<a<<"+"<<b<<"i"<<endl;
                }
            }
        }
       else if(b < 0)
        {
            if(b == -1)
            {
                if(a == 0)
                {
                    cout<<"-i"<<endl;
                }
                else{
                    cout<<a<<"-i"<<endl;
                }
            }
            else {
                if(a == 0)
                {
                    cout<<b<<"i"<<endl;
                }
                else{
                    cout<<a<<b<<"i"<<endl;
                }
            }
        }
        else if(b == 0)
        {
            if(a == 0)
            {
                cout<<"0"<<endl;
            }
            else
            {
                cout<<a<<endl;
            }
        }
    }
};
sophuc volume(sophuc v1,sophuc v2)
{
    sophuc tich;
    tich.a = v1.a * v2.a - v1.b * v2.b;
    tich.b = v1.a * v2.b + v1.b * v2.a;
    return tich ;
}
int main()
{
    int n;
    cin>>n;
    double x,y;
    cin>>x>>y;
    sophuc A(x,y);
    A.print();
    sophuc B(1,0);
    for(int i = 0; i < n; i++)
    {
         B = volume(B,A);
    }
    B.print();
    return 0;
}
