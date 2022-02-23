#include <iostream>
#include <string.h>
#include <string>
using namespace std;
int main ()
{
    char* cstr;
    char* p;
    string str ("Xin chao tat ca cac ban");
    cstr = new char [str.size()+1];
    strcpy (cstr, str.c_str());
    // cstr là 1 bản sao c-string của str
    p=strtok (cstr," ");
    for(int i=p.size()-1;i>=0;i--)
        cout<<p[i];
    delete[] cstr;
    return 0;
}
#include <iostream>
#include <string.h>
#include <string>
using std::string;
int main ()
{
    char* cstr;
    char* p;
    string str ("Xin chao tat ca cac ban");
    cstr = new char [str.size()+1];
    strcpy (cstr, str.c_str());
    // cstr là 1 bản sao c-string của str
    p=strtok (cstr," ");
    while (p!=NULL)
    {
        cout << p << endl;
        p=strtok(NULL," ");
    }
    delete[] cstr;
    return 0;
