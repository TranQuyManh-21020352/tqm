#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{

    ifstream finein;
     finein.open("E:\\note\\haha.txt",ios_base::in);
     if( !finein){
         return 0;
     }







       finein.close();
}

