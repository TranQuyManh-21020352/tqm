#include <iostream>

using namespace std;

int main()
{
    string line= "goodbye";

    {
        cout <<"write something :";
        getline(cin,line);
        cout<< "entered:" <<line<<endl;

    }
    while(line != "ahihiO");
}
