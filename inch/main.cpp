#include <iostream>

using namespace std;

int main()
{
   const double cmperinch=2.54;
   int lengthininch=1;
   cout << "please enter a length in inches:";

   cin >> lengthininch;
   cout << lengthininch<< "in. ="
   <<cmperinch*lengthininch
   <<"cm." << endl;
}
