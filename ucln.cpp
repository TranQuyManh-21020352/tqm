#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int i,a,b , mi, ucln = 1;


    cin >>a>>b ;

    if(a == 0 && b == 0) {
        cout << "Hai so 0 khong co uoc chung lon nhat" << endl;
    } else if (a != 0 && b == 0) {
        cout  << abs(a) << endl;
    } else if (a == 0 && b != 0) {
        cout <<  abs(b) << endl;
    } else {
        if(abs(a) < abs(b)) {
            mi = abs(a);
        } else if(abs(a) > abs(b)) {
            mi = abs(b);
        }

        for(int i = 1; i <= mi; i++) {
            if(a%i == 0 && b%i == 0) {
                ucln = i;
            }
        }
        cout <<  ucln << endl;
    }
    return 0;
}
