#include <iostream>
#include<cmath>

using namespace std;

struct Time
{
    int hour, minute, second;
    Time(int initHour, int initMinute, int initSecond)
    {
        hour = initHour;
        minute = initMinute;
        second = initSecond;
    }
    void getTimeDifference(Time other)
    {
        int s= abs(hour*3600 + minute *60 + second - other.hour * 3600 - other.minute * 60-other.second);
        int h = s/3600;
        int d = s%3600;
        int p = d/60;
        int giay = d%60;
        cout<<"0"<<h<<":";
        if(p == 0)
        {
            cout<<"00:";
        }
        else if(p<10)
        {
            cout<<"0"<<p<<":";
        }
        else
        {
            cout<<p<<":";
        }
                if(giay == 0)
        {
            cout<<"00";
        }
        else if(giay<10)
        {
            cout<<"0"<<giay<<":";
        }
        else
        {
            cout<<giay<<endl;;
        }
    }
};

int main()
{
    int hour, minute, second;
    cin >> hour >> minute >> second;
    Time time1(hour,minute,second);
    cin >> hour >> minute >> second;
    Time time2(hour,minute,second);
    time1.getTimeDifference(time2);
    return 0;
}
