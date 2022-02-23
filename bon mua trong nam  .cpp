
#include <iostream>
#include<fstream>
#include<string>
using namespace std;
void housesOfHogwarts(const char* path)
{
ifstream file(path);
int n;
file>>n;
file.ignore();
for(int i=1;i<=n+1;i++)
{
    string line;
    getline(file,line);
    cout<<line<<endl;
}


}

int main()
{
    const char* path;
 housesOfHogwarts( path);

}
