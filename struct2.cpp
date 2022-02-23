#include<iostream>

using namespace std;

struct Vector{
double x;
double y;
Vector(){}
Vector(double toado1,double toado2)
{
    x  = toado1;
    y  = toado2;
}
void print()
{
    cout<<"("<<x<<","<<y<<")"<<endl;
}
Vector tong(Vector other)
{
    Vector sum;
    sum.x = x + other.x;
    sum.y = y + other.y;
    return sum;
}

};
int main()
{
    Vector v1(2,5), v2(-2,5);
   Vector sum = v1.tong(v2);
   sum.print();
    return 0;
}
