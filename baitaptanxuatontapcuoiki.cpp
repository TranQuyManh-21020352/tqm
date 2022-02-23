#include<iostream>
#include<string>

using namespace std;

struct xau{
   string s;
};
int main()
{
    /*int n;
    cin>>n;
    int s[1000];
    for(int i = 0; i < n; i++ )
    {
        cin>>s[i];
    }
    for(int i = 0; i < n; i++)
    {
        int d = 0;
        for(int j = 0; j < n; j++)
        {
            if(s[i] == s[j] && j >= i)
            {
                d++;
            }
            else if(s[i] == s[j] && j < i)
            {
                d = 0;
                break;
            }
        }
        if(d != 0)
        {
            cout<<s[i]<<"xuat hien: "<<d<<" lan"<<endl;
        }
    }
    */
    string c;
    getline(cin,c);
    xau A[1000];
    int d=0,k=0;
    for(int i =0; i < c.size();i++)
    {
        d++;
        if(c[i] == ' ')
        {
            for(int j =0; j< d-1;j++)
            {
                A[k].s = A[k].s + c[i-d+1+j];
            }
            d=0;
            k++;

        }
        if(i == c.size()-1)
        {
            for(int j =0; j<d;j++)
            {
                A[k].s = A[k].s + c[i-d+1+j];
            }

        }

    }
   for(int i =0; i<= k;i++)
   {
       int d =0;
       for(int j = 0; j <= k; j++)
       {
           if(A[i].s == A[j].s && j >= i)
           {
               d++;
           }
           else if(A[i].s == A[j].s && j < i)
           {
               d=0;
               break;
           }
       }
       if(d != 0)
       {
           cout<<A[i].s<<" xuat hien "<<d<<"lan"<<endl;
       }
   }
}
