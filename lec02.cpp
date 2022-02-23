#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;
int generateRandomnumber(){
 int v = rand() % 200 + 1;
 return v;
}
int getplayerguessSingle()
{
    int guess;
    cout<<"enter your guess: ";
    cin>>guess;
    return guess;
}
int getplayerguessMulti(int player,int secretnumber)
{
    int guess[1000];
    for(int i = 1; i <= player; i++)
    {
        cout<<"player"<<i<<", enter your guess: ";
        cin>>guess[i];
    }
    for(int i = 1; i <= player; i++)
    {
      PrintAnswer(guess[i], secretnumber)
    }
}
 void PrintAnswer(int guess, int secretnumber)
{
    if(guess > secretnumber)
    {
        cout<<"your number is too big"<<endl;
    }
    else if(guess < secretnumber)
    {
        cout<<"your number is too small"<<endl;
    }
    else
    {
        cout<<"Congratulation! you win"<<endl;
    }
}
void getAnswersingle()
{
  int i = 1,j = 1;
    int guess;
    string s;
    while(s != "no")
    {
    int secretnumber = generateRandomnumber();
    do{
            cout<<endl<<"lan doan thu: "<<i<<", luot thu "<<j<<endl;
     guess = getplayerguess();
    PrintAnswer(guess,secretnumber);
    i++;
    }
    while(guess != secretnumber);
    cout<<"Diem cua nguoi choi sau "<<i-1<<" lan doan la: "<<100 - i + 1<<endl;
    cout<<"ban co choi lai khong?"<<endl;
    cout<<"tra loi: ";
    cin>>s;
    if(s != "yes" && s != "no")
    {
        cout<<"moi nhap lenh lai:";
        cin>>s;
    }
    if(s == "yes")
    {
        cout<<endl<<"moi ban choi tiep"<<endl;
        i = 1;
        j++;
    }
    else if(s == "no")
    {
        cout<<"Moi ban ra ngoai!"<<endl;
    }
}
}
void getAnswerMulti(int player)
{
    int Player[1000];
    for(int i = 1; i <= player; i++)
    {
        Player[i] = i;
    }
    int Count = 0;
    for(int i = 1; i < player; i++)
    {

    }
}
int main()
{
    cout<<"ban muon choi mot minh hay nhieu minh? "<<endl;
    int player;
    cin>>player;
    if(player == 1)
    {
        getAnswersingle();
    }
    else if(player > 1)
    {
        getAnswerMulti(player);
    }
    srand(time(0));
    return 0;
}
