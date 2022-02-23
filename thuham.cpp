/*#include<iostream>

using namespace std;

long long fibonacci(int n){
	if (n == 1 || n == 2) return 1;
	return fibonacci(n-1) + fibonacci(n-2);
}
int main(){
	int n;
	cin >> n;
	cout << fibonacci(n);
	return 0;
}*/
#include<iostream>

using namespace std;

int tong(int x,int n){
    if(n==0)
    return 1;
return x*tong(n-1);
}
int main(){
	int m,n;
	cin >>m>>n;
	cout << tong(m,n);
	return 0;
}
