#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int machinenumber()
{
    return rand() % 100 + 1;
}
int mynumber()
{
    cout<<"moi ban nhap so: ";
    int x;
    cin>>x;
    return x;
}
int main()
{
    int i = 0;
    int X;
    srand(time(0));
    int sobian = machinenumber();
    do{
        X = mynumber();
        if(X > sobian)
        {
            cout<<"yournumber is too big!"<<endl;
            cout<<endl;
        }
        else if(X < sobian)
        {
            cout<<"yournumber is too small!"<<endl;
            cout<<endl;
        }
        if(X == sobian)
        {
            cout<<"congratulation! You Win!"<<endl;
        }
        i++;
    }
    while(X != sobian);
    cout<<"ban duoc "<<100 - i<<" diem."<<endl;
    return 0;
}
