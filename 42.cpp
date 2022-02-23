/*tim so nguyen to va sapxep*/
#include <iostream>
using namespace std;
void nhapmang(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"a["<<i<<"]= ";
        cin>>a[i];
    }
}
int songuyento(int n)
{
    if(n<2)
        return 0;
    else if(n==2)
    return 1;
    else{
        for(int i=2;i<n;i++)
        {
            if(n%i==0)
            {
                return 0;
            }
        }
        return 1;
    }

}
void sapxep(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        if(songuyento(a[i])==1)
        {
            for(int j=i;j<n;j++)
            {
                if(songuyento(a[j])==1&&a[j]<a[i])
                {
                    swap(a[j],a[i]);
                }
            }
        }

    }
}
void xuatmang(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
      if(songuyento(a[i])==1)
       {
           cout<<a[i]<<" ";
       }

    }
}

 int main()
 {
     int n;
     cin>>n;
     int *a= new int[n];
     nhapmang(a,n);
     songuyento(n);
     sapxep(a,n);
     xuatmang(a,n);

 }
