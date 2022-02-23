#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cstring>
using namespace std;

int main()
{
    int k=0;
    vector <int> b;
    char s[100];
    cin.getline(s,100);
    for(int i = 0 ; i < strlen(s); i++)
    {
        if(s[i] >= '0' && s[i] <= '9')
        {
           b.push_back(s[i] -48);
           k++;

        }

    }
 for(int i = 0 ; i < k; i++)
 {
     cout<<b[i]<<" ";
 }
}
