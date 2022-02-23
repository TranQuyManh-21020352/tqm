#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a[m][n];

    for(int i=1;i<=m;i++)
    {
        for(int j=1;i<=n;i++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=m;i++)
    {
        for(int j=1;i<=n;i++)
        {
            cout<<a[i][j];
        }
    }
}
