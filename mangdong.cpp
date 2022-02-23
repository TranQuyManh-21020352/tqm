#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    vector<int>arr;
    for(int i=1;i<=5;i++)
    {
        cin>>n;
        arr.push_back(n);
    }
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<arr.max_size()<<endl;
    cout<<arr.front()<<" "<<arr.back()<<endl;

}
