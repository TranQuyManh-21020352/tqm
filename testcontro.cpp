#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
double* getSquare (double number)
{
    double m;
    number=number*number;
    double *a = &number;
    double m=*a;

}
int main()
{
  double n;
  cin>>n;
  cout<<(getSquare (n));

}

