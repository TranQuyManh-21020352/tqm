#include <iostream>
#include <string>
using namespace std;
/*int swapp(int &a,int &b)
{
    int m=a;
    a=b;
    b=m;
}
*/
int main()
{
    int**ptr=new int *[];
    int n,m;
    cin>>m>>n;
    for(int i=0;i<m;i++)
    {
        ptr[i]=new int[n];
    }

}
