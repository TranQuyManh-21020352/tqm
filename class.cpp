#include<iostream>
#include<string>

using namespace std;

struct toado{
      int x,y;
      toado(){}
      toado(int _a,int _b)
      {
          x = _a;
          y = _b;
      }
    toado sum(toado other)
    {
        toado tong;
        tong.x = x + other.x;
        tong.y = y + other.y;
       return tong;
    }
    void print()
    {
        cout<<"("<<x<<","<<y<<")"<<endl;
    }
};
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    toado v1(a,b),v2(c,d);
    toado sum = v1.sum(v2);
    sum.print();
    return 0;
}
