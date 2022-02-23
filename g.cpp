
#include <iostream>
using namespace std;

struct Vector {
    double x;
    double y;
    Vector (double _x, double _y){
        x = _x;
        y = _y;
    }
    void printVector(){
        cout << x << " " << y << endl;
    }
};

Vector addVector(Vector v1, Vector v2)
{
    double s1,s2;
 Vector sum( s1,s2);
 sum.x = v1.x + v2.x;
 sum.y= v1.y + v2.y;
return sum;
}

int main()
{
    double a1,a2,b1,b2;
    cin>>a1>>a2>>b1>>b2;
    Vector a(a1,a2),b(b1,b2);
    Vector sum = addVector(a,b);
  sum.printVector();
}
