#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <ctime>

using namespace std;

char gethostAnswer(int X)
{
    char answer;
    cout<<"Is "<<X<<" your number?"<<endl;
    cout<<"your answer: ";
    cin>>answer;
    return answer;
}

int sellectnumber(int low, int high)
{
    return (high + low) * 0.5 ;
}
int main()
{
    srand(time(0));
    int X;
    char answer;
    int low = 1, high = 100;
    int k;
    do{

       X = sellectnumber(low,high);
       answer = gethostAnswer(X);
       if(answer == '>')
       {
           low = X + 1 ;
       }
       else if(answer == '<')
       {
           high = X - 1;
       }
       else if(answer == '=')
       {
           cout<<"computer very dark!"<<endl;
       }
    }
    while(answer != '=');
    return 0;
}

