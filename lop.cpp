#include<iostream>
#include<string>
#include<cmath>

using namespace std;

class toado{
int x,y;
public:
    toado(){}
 toado(int _a,int _b){
  x = _a;
  y = _b;
}
void print()
{
    cout<<x<<" "<<y;
}
toado operator+(const toado &other) const{
  toado sum(x+other.x,y+other.y);
  return sum;
}
toado operator*(const int k) const{
toado nhan(x * k,y * k);
return nhan;
}
};

int main()
{
   int a,b,c,d;
   cin>>a>>b>>c>>d;
   toado A(a,b);
   toado B(c,d);
   toado sum = A + B;
   toado tich = A * 3;
   sum.print();
   cout<<endl;
   tich.print();
   return 0;
}
