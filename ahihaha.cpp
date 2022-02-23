#include <iostream>
#include <string>

using namespace std;
int main()
{
int m;
cin>>m;
for(int i=1;i<=m;i++)
{
   string a,b;
    cin>>a;
    cin>>b;
    for(int i=0;i<a.size();i++)

    {
        if(a[i]>=97&a[i]<=122)
        a[i]-=32;
    }


    if(a.size()<b.size()){
    cout<<"NO"<<endl;

    }
    else
    {
        int d=0,k=0;


            for(int i=0;i<=b.size()-1;i++)
            {
                    for(int j=0;j<=a.size() ;j++)
                    {
                        if(b[i]==a[j]);
                        d++;
                    }
                    if(d<=0)
                    {
                        cout<<"NO"<<endl;
                    }
                    else if(d>=1)
                    {
                        k++;
                    }
            }
            if(k==b.size())
            {
                cout<<"YES"<<endl;
            }


}



    }
    return 0;

}








