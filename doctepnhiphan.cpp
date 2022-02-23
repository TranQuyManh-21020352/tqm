#include <iostream>
#include <fstream>
#include<vector>

using namespace std;

int main() {

    /*string path;
    cin >> path;

		ifstream filein(path, ios::binary);
		while (!filein.eof()){
				int n;
				if (filein.read((char *)&n, sizeof(n)))
						cout<<n<<" ";
		}
	  filein.close();

		return 0;
		*/
		/*day fibonacci*/
		int n;
		cin>>n;
		vector<int>arr;
        arr.resize(n);
		arr[1]=1;arr[2]=1;
		for(int i=3;i<=n;i++)
        {
            arr[i]=arr[i-1]+arr[i-2];

        }
        cout<<arr[n]<<endl;
}
