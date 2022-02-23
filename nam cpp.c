#include <iostream>

using namespace std;

int main()
{
      int n=0, s=0;
      while(n<=15)
      {

          if(n%3==1)
            s+= n;
          n++;
      }

cout << "tong cac so chia 3 du 1 la : "<< s<<endl;
}
