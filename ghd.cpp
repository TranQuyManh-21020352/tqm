#include <iostream>
using namespace std;
double chia(int a, int b)
{
   if( b == 0 )
   {
      throw "Chu y: Ban dang chi cho so 0!";
   }
   return (a/b);
}int main ()
{
   int x = 15;
   int y = 0;
   double z = 0;

   try {
     z = chia(x, y);
     cout << z << endl;
   }catch (const char* msg) {
     cerr << msg << endl;
   }   return 0;
}
