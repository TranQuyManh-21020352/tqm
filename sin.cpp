#include<iostream>
#include<cmath>

using namespace std;
struct luonggiac{
double x;
double y;
luonggiac(double hoanhdo, double tungdo)
{
    x = hoanhdo;
    y = sqrt(abs(sin(x)));
}
void print()
{
    cout<<"("<<x<<","<<y<<")"<<endl;
}

};
int main()
{
    double x;
    cin>>x;
    double y ;
    luonggiac toado(x,y);
    toado.print();
    return 0;
}
