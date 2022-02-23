#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>
#include <cstring>
#include <iomanip>

using namespace std;

void arithmetic1 (int num1,int num2,char op)
{
    switch(op){
   case '+':
    cout<<num1 + num2 <<endl;
    break;
   case '-':
    cout<<num1 - num2<<endl;
    break;
   case '*':
    cout<<num1 * num2<<endl;
    break;
   case '/':
       if(num2 == 0)
       {
           cout<<"Invalid divisor"<<endl;
           break;
       }
       else{
    cout<<"phan nguyen la: "<<num1/num2<<endl;
    cout<<"phan du la: "<<num1 % num2<<endl;
    break;
       }
   default:
    cout<<"Invalid divisor"<<endl;
    }
}
void arithmetic2(int num)
{
    cout<<"cos cua so do la: "<<setprecision(2)<<fixed<<cos(num)<<endl;
    cout<<"can bac hai cua so do la: "<<setprecision(2)<<fixed<<sqrt(num)<<endl;
}
int main()
{
    int num1,num2;
    char op;
    char argv[100];
    cin.getline(argv,100);
    if(strlen(argv) == 2)
    {
        int num = atoi(argv);
        arithmetic2(num);
    }
    else{
    num1 = argv[0] - 48;
    op = argv[1];
    num2 = argv[2] - 48;
    cout<<num1<<" "<<num2<<endl;
    arithmetic1(num1,num2,op);
    }
    return 0;
}
