#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cout<<"Xin moi ban nhap ten: ";
    do{
        getline(cin,s);
        if(s != "Nguyen Tuan Dat")
        {
            if(s == "Tran Quy Manh")
            {
                cout<<"    anh Manh dep trai qua   "<<endl;
            }
            else if(s == "Pham Thanh Truc")
            {
                cout<<"     chi Truc xinh gai de thuong qua  "<<endl;
            }
            cout<<"Xin moi ban nhap ten moi: ";

        }
        else
        {
            cout<<"   UI THANG DAN BA :)) "<<endl;
            int n = 1;
            while(n != 0)
            {
                cout<<"   *MM THANG DAN BA   "<<endl;
            }
        }
    }
    while(s != "Nguyen Tuan Dat");
}
