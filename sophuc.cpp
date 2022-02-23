#include<iostream>

using namespace std;

struct sophuc{
  double x,y;
  sophuc(){}
  sophuc(double _thuc,double _ao)
  {
      x = _thuc;
      y = _ao;
  }
  sophuc tich(sophuc other)
  {
      sophuc s;
      s.x = x * other.x - y * other.y;
      s.y = y * other.x + x * other.y;
      return s;
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
    sophuc A(a,b),B(c,d);
    sophuc C = A.tich(B);
    C.print();
}
