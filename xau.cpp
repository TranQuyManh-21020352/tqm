#include<iostream>
#include<string>
#include<cctype>
#include<cstring>
#include<algorithm>

using namespace std;

 void daoxau(char *s,char *ketqua)
{
    int h=0,d =0;
    for(int i= strlen(s) -1; i>=0; i--)
    {
        d++;
        if(s[i] == ' ')
        {
            for(int k = i + 1; k<i+d; k++)
            {
                ketqua[h] = s[k];
                h++;
            }
             ketqua[h]=' ';
               h++;
               d=0;
        }
        if(i == 0)
        {
            for(int j=0 ; j<d;j++)
            {
                ketqua[h] = s[j];
                h++;
            }
        }
}
    ketqua[h]='\0';

}
int main()
{

    char s[100];
    cin.getline(s,100);
    char *ketqua = new char[strlen(s)];
    daoxau(s,ketqua);
    cout<<ketqua<<endl;

}

/*
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s;
    getline(cin,s);
    s.insert(0,"a");
    s.replace(1,1,"ab");
    cout<<s<<endl;

}
/*hàm xóa kí tự bất kì
#include<cstring>
#include<string>
void delete_char(char *S, char c)
{
    for(int i=0;i<strlen(S);i++)
    {
        if(S[i]==c){
      for(int j=i;j<strlen(S);j++)
      {
         S[j]=S[j+1];
      }

       i--;
    }
}
}
*/

