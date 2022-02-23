#include <iostream>
#include <fstream>

using namespace std;

int main() {

    string path;
    cin >> path;

		ifstream filein(path, ios::binary);
		while (!filein.eof()){
				int n;
				if (filein.read((char *)&n, sizeof(n)))
						cout<<n<<" ";
		}
	  filein.close();

		return 0;
}
/* so dao nguoc*
int reverse (char * path) {
    // complete the function
    int n;
    ifstream inFile(path);
    inFile >> n;
    inFile.close();

    int v = 0;
    while (n) {
        int d = n % 10;
        v = v * 10 + d;
        n /= 10;
    }
    return v;
}
*/
