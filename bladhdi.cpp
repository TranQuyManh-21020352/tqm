
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;

    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];

    }
   for(int i=1;i<=n;i++)
   {
       int d=0;
       for(int j=1;j<=n;j++)
       {
           if(arr[i]==arr[j])
           {
               if(i<=j)
                d++;
               else
                break;
           }

       }
       if(d!=0)
cout<<arr[i]<<" "<<d<<endl;

   }

    return 0;




}

