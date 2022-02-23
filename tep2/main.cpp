#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int songuyento(int n)
{
          if(n<2)
        {
            return 0;
            }
            else if(n==2)
                return 1;
            else if(n>=2)
            {
                for(int i=2;i<=n;i++)
              {
                  if(n%i==0)
                    return 0;
                  else if(n%i!=0)
                    return 1;
              }


            }

    }




int main()
{
    int n;
   int s[100];
    ifstream finein;
     finein.open("hihi.txt",ios_base::in);
     if( !finein){
         return 0;
     }
     for(int i=0;i<=5;i++)
     {
         finein>>s[i];

     }


 finein.close();

ofstream fineout;
fineout.open("haha.txt",ios_base::out);
for(int i=0;i<=5;i++){
if(songuyento(s[i])==1)
    {
        fineout<<s[i]<<" ";
    }


}

}
