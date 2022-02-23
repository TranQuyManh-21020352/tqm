#include <iostream>
using namespace std;

void swap(int *a, int *b) {
int c;
c=*a;
*a=*b;
*b=c;
}

int main() {
    int a, b;
    cin >> a >> b;
    int *p1;
    int *p2;
    &a = &p1;
    &b = &p2;
    swap(*p1,*p2);
    cout << *p1 << " " << *p2;

    return 0;
}
