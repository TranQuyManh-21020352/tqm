#include<iostream>
#include<string>
#include<cstring>

using namespace std;

struct String{
     char *arr;
     int length;
     String(char *_s)
     {
         length = strlen(_s);
         arr = new char[length];
         strncpy(arr,_s,length);
     }
     void  print()
     {
         cout<<arr<<endl;
     }

};

int main()
{
    char s[100];
    cin.getline(s,100);
    String a(s);
    String *ptr = &a;
    ptr ->print();
}
