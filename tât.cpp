#include<iostream>
#include<cmath>
using namespace std;

/*double dayso(double n)
{
    if(n==0){
        return 0;
    }
    double s=0;
    for(int i=1;i<=n;i++)
    {
        s=s+i*i;
    }
    return (pow(-1,n+1))/s+dayso(n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<dayso(n);
    return 0;
}
/*bool chia5(int n)
{
    if(n%5==0){
            cout<<n<<" chia het cho 5 "<<endl;
        return true;
    }
    else
        return false;
}
int main()
{
    int n;
    cin>>n;
    chia5(n);
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=i;j++)
    {
        cout<<j<<" ";
    }
    cout<<endl;
}
}
*/
int main()
{


int n;
do{
    cin>>n;
    if(n>100){
        cout<<"vui long nhap lai: ";
    }
    else
    {
        for(int i=1;i<=10;i++)
        {
            cout<<n<<" * "<<i<<" = "<<n*i<<endl;
        }
    }
}
while(n>100);
}
