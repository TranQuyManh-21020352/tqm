#include <iostream>
#include<string>

using namespace std;
bool canPlaceFlowers (int flowerbed[], int n, int k)
{
    int b[n];
    for(int i=0;i<n;i++)
    {
        b[i] = flowerbed[i];
    }
    int d=0;
    for(int i=0; i < n; i++)
    {
        if(flowerbed[i] == 0)
        {
            d++;
        }
    }
    for(int i=0 ; i<n ;i++)
    {
        if(flowerbed[i] == 0 && (flowerbed[i-1] == 1 || flowerbed[i+1] == 1))
           {
               b[i] = 1;
               d--;
           }
    }
    if(d < k){
    return false;
    }
    else if(d >= k){

              int q=0;
        for(int i=0;i<n;i++)
        {

            int p =0;
            if(b[i]== 0)
            {
                p=1;
                for(int j=i+1; j<n;j++)
                {
                    if(b[j] == 0)
                    {
                        p++;
                    }
                    if(b[j] !=0 || j == n -1)
                    {
                        i = j - 1 ;
                        break;
                    }

                }

                if(p % 2 == 0)
                {
                    q= q+ p/2;
                }
                else
                {
                    q = q+1+p/2;
                }
            }

        }
        if(q<k)
            return false;
        else
            return true;
    }

}
int main()
{
    int k;
    int n;
    cin>>n>>k;
    int flowerbed[n];
    for(int i = 0;i<n;i++)
    {
        cin>>flowerbed[i];
    }
    cout<<canPlaceFlowers (flowerbed,  n,  k);
}
