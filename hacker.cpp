#include <sstream>
#include <vector>
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

/*struct Char{
char Kitu[1000];
};

vector<int> parseInts(string str) {
	vector<int> kitu;
	Char c[1000];
	int j = 0, k = 0;
    for(int i = 0; i < str.size(); i++)
    {
        c[j].Kitu[k] = str[i];
        if( str[i] == ',' || i == str.size() - 1)
        {
            int a = atoi(c[j].Kitu);
            kitu.push_back(a);
            j++;
            k = 0;
            continue;
        }
         k++;
    }
    return kitu;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}
*/
int main()
{
    stringstream ss;
    string s;
    getline(cin,s);
    ss << s;
   int arr[1000];
   int temp;
   int i = 0;
   while(ss >> temp)
    {
        char c;
        ss>>c;
        arr[i] = temp;
        i++;
    }
    for(int j = 0; j < i; j++)
    {
        cout<<arr[j]<<" ";
    }
}
