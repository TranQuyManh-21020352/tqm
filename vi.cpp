#include<iostream>
#include<cctype>
using namespace std;

void maxx(int* a,int *b)
{
    if(*a > *b)
    {
        int m=*a;
        *a =*b;
        *b = m;
    }

}
int main()
{
    char c;
    cin>>c;
    cout<<char(tolower(c));
}
