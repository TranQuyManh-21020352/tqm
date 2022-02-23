#include <iostream>
#include<string>
using namespace std;
void uoc(  unsigned long long int a[],int n) {
for(int i=1;i<=n;i++ )
{
    int c,d=0;
    for(int j=1;j<=a[i];j+=1)
    {
       c=a[i]%j;
       if(c==0)
       {
           d+=j;
       }
    }
    cout<<d<<endl;


}

}
int main() {
    unsigned long long int a[100];
    int n;
    cin >> n;
    for(int j=1;j<=n;j++)
    {
        cin>>a[j];
    }
  uoc(a,n);

    return 0;
}

