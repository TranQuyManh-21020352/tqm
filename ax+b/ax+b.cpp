#include <iostream>

using namespace std;

int main()
{


float a,b;
cout << "nhap so a bang:" << endl;
cin >> a;
cout << "nhap so b bang:" << endl;
cin >> b;
if (a==0)
{
    if (b=0)
    {
        cout << "phuong trinh co co so nghiem ";
        }
        else
        {

        cout << "phuong trinh vo nghiem ";
        }
    }

   else
        cout <<"\nphuong trinh co nghiem la:" << -b/a;
   return 0;
}
