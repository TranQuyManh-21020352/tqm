/*#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
  vector<vector<int>>arr;
  arr.resize(x);
  for(int i=0;i<y;i++)
  {
      arr[i].resize(y);

  }
  for(int i=0;i<x;i++)
  {
      for(int j=0;j<y;j++)
      {
          cin>>arr[i][j];
          cout<<arr[i][j]<<" ";
      }
      cout<<endl;
  }

}

#include <bits/stdc++.h>
#include<string>

using namespace std;
char* daoNguocTuCoTrongChuoi(char *S){

    char* ketQua = new char[strlen(S)];
    int j = 0;
    int dem = 0;
    for(int i = strlen(S); i >= 0; i--){
        if (i == strlen(S) || i == strlen(S)-1)
            continue;
        dem++;
        if (S[i] == ' '){
            for(int k = i; k < i+dem; k++){
                ketQua[j] = S[k+1];
                j++;
            }
            ketQua[j-1] = ' ';
            dem = 0;
        }
        if (i == 0){
            for(int k = i; k < i+dem; k++){
                ketQua[j] = S[k];
                j++;
            }
        }

    }

    ketQua[strlen(S)-1] = '\0';

    return ketQua;
}

int main(){
    char S[300];
    fflush(stdin);
    fgets(S, 300, stdin);
    char* ketQua = daoNguocTuCoTrongChuoi(S);

    puts(ketQua);
}
(so lan xuat hiên)
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    int a[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"a["<<i<<"]=";
        cin>>a[i];
    }
     for(int i=0;i<n;i++)
    {
        int d=0;
        for(int j=0;j<n;j++)
        {
            if(j>=i && a[i]==a[j])
            {
                d++;
            }
            else if(j<i&&a[i]==a[j])
            {
                break;
            }
        }
        if(d>0)
        {
             cout<<a[i]<<" xuat hien: "<<d<<" lan "<<endl;
        }


    }
    return 0;

}

#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main()
{
    int n,x,y;
    cin>>n;
    int m=n+1;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            if(i+n/i<m)
            {
                int m=i+n/i;
                x=i;
                y=n/i;

            }
        }
    }
    cout<<x<<" "<<y<<endl;
}
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int>arr;
    for(int i=0;i<5;i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    arr.erase( arr.begin()+2, arr.begin()+4);
    for(int i=0;i<arr.size();i++)
    {
        cout<<"a["<<i<<"]= "<<arr[i]<<" ";
    }
    cout<<endl;
    arr.insert(arr.begin()+3,5,4);
    for(int i=0;i<arr.size();i++)
    {
        cout<<"a["<<i<<"]= "<<arr[i]<<" ";
    }
}

