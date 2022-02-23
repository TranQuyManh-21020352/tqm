#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int>arr;
    for(int x,i=0;i<5;i++)
    {
        cin>>x;
        arr.push_back(x);
    }
    arr.erase(arr.begin()+2);
    arr.insert(arr.begin()+2,69);
    vector<int>brr;
    for(int x,i=0;i<3;i++)
    {
        cin>>x;
        brr.push_back(x);
    }
    brr.erase(brr.begin()+2);
    brr.insert(brr.begin()+2,96);
    brr.swap(arr);
   for(int i=0;i<arr.size();i++)
   {
       cout<<arr[i]<<" ";
   }


}
