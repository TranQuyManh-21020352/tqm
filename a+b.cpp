#include<iostream>

#include<cmath>
#define MAX 100
using namespace std;
void nhap (int a[], int &n)
{


	for(int i = 0; i < n; i++)
	{

		cin>>a[i];
	}
}

void xuat(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
cout<<a[i]<<" ";
	}
}

int amhayduong(int n)
{
	if(n<0)
    {
        return 0;
    }
    else if(n>0){
        return 1;
}
}
void sapxep(int a[], int n)
{
	for(int i = 0; i < n - 1; i++)
	{
		if(amhayduong(a[i]) == 0)
		{
			for(int j = i + 1; j < n; j++)
			{
				if(amhayduong(a[j]) == 0 && a[j]>a[i])
				{
					swap(a[i], a[j]);
				}
			}

		}
		if(amhayduong(a[i]) == 1)
		{
			for(int j = i + 1; j < n; j++)
			{
				if(amhayduong(a[j]) == 1 && a[j]<a[i])
				{
					swap(a[i], a[j]);
				}
			}

		}
	}
}
int main()
{
	int n;
	cin>>n;
	int a[MAX];

	nhap(a, n);


	amhayduong( n);
	sapxep(a,n);

	xuat(a, n);


	return 0;
}
