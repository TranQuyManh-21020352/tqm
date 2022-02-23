#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int i=0,d=0;
    int a[100];
    ifstream file;
    file.open("ahi.txt",ios_base::in);
    file.ignore();
    while(!file.eof())
    {
        file>>a[i];
        cout<<a[i]<<" ";
        i++;
        d++;
    }
    cout<<a[i-2];
}
