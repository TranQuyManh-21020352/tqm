/*#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n;
    int a[22000];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    m=a[0];

    for(int i=0;i<n-1;i++)
    {
       a[i] =a[i+1];
    }
    a[n-1]=m;

for(int i=0;i<n;i++)
{
    cout<<a[i]<<" ";
}

#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n,x;
    cin>>n;
int *a=new int;
    for(int i=0;i<n;i++)
    {
       cin>>*(a+i);

    }
    sort(a,a+n);

for(int i=0;i<n;i++)
{
    cout<<*(a+i)<<" ";
}

}
*/
#include<iostream>
#include<algorithm>
#include<vector>
#include <string>

using namespace std;

int main()
{
    int n,x;
    cin>>n;
vector<int>a;
a.resize(n);
    for(int i=0;i<n;i++)
    {
       cin>>a[i];

    }
    sort(a.begin(),a.end());
    auto last=unique(a.begin() , a.end());
    a.erase(last,a.end());

cout<<a.size();

}


