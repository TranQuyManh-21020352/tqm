#include <iostream>
using namespace std;

int main()
{
   int a=9;
   void *b;
   b=&a;
   cout<<"gia tri con tro b la:"<<*(int *)b;
}
