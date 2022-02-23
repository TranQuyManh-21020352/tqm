#include<iostream>

using namespace std;
void doicho(int *a, int *b)
{
    int m;
    m = *a;
    *a = *b;
    *b = m;
}
int main()
{
   int x,y;
   cin>>x>>y;
   doicho(&x,&y);
   cout<<x<<y;
}
