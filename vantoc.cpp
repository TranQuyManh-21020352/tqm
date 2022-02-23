#include <iostream>
using namespace std;
int main()
{
    const double t=0.5;
    double p=0;
    const double v=50;
 double getPosition(double op,
                    double v,
                    double t)
{


      double distance = v*t;
      double np= distance +op;
      return np;
}
}
