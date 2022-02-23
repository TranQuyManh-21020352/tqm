#include <iostream>
#include<string>
using namespace std;
void dem(  unsigned long long int a[],int n) {


    for(int j=1;j<=n;j++){
 unsigned long long int b[100],p=a[j],d=0;
    for(int i=1;i<100;i++){

   b[i]=p%10;
d++;
  p=p/10;
  if(p==0)
    break;
}
int c=0;
for(int i=1;i<=d;i++)
{
    if(b[i]==2||b[i]==3||b[i]==5||b[i]==7)
        c++;

}

cout<<c<<endl;



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
  dem(a,n);

    return 0;
}
