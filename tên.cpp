#include <iostream>
using namespace std;

int main()
{
    cout << "\nenter your first and second name: ";
    string first , second;
    cin >> first >> second;
    string name;
    name = first + second;
    cout << "hello," << name << endl;
    return 0;
}
