#include <iostream>
#include <string>

using namespace std;

int main()
{
  string s;
  getline(cin,s);
  for(int i = 0; i < s.size(); i++)
  {
      for(int j = i + 1; j < s.size(); j++)
      {
          if(s[j] == s[i])
          {
              s.erase(j,1);
              j--;
          }
      }
  }
  cout<<s<<endl;
}
