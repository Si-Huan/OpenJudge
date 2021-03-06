#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

class Time {
public:
        int h, m, s;
        Time(int hh = 0, int mm = 0, int ss = 0):h(hh), m(mm), s(ss) {

        }
        Time(const Time& T) {
                h = T.h;
                m = T.m;
                s = T.s;
                cout << "There was a call to the copy constructor : " << h << "," << m << "," << s << endl;
        }
        Time& setTime (int a, int b, int c) {h = a; m = b; s = c; return *this;}
        Time& setTime (const Time& T) {h = T.h; m = T.m; s = T.s;return *this;}
        Time& getTime () {return *this;}
        Time& inputTime () {cin >> h >> m >> s;return *this;}
        void showTime () {
                if (h > 23 || m > 59 || s > 59) cout << "Time error" << endl;
                else if (h < 0 || m < 0 || s < 0) cout << "Time error" << endl;
                else cout << setw(2) << setfill('0') << fixed << h << ":" << setw(2) << setfill('0') << fixed << m << ":" << setw(2) << setfill('0') << fixed << s << endl;
        }
        int hour () {return this->h;}
        int minute () {return this->m;}
        int second() {return this->s;}
        void hour (int a) {h = a;}
        void minute (int a) {m = a;}
        void second (int a) {s = a;}

};



int main()
{
    Time t;
    int cases;
    cin>>cases;
    for(int i = 1; i <= cases; ++i)
    {
        if(i % 4 == 0)
        {
            int hour, minute, second;
            cin>>hour>>minute>>second;
            Time tt(hour, minute, second);
            tt.showTime();
        }
        if(i % 4 == 1)
        {
            int hour, minute, second;
            cin>>hour>>minute>>second;
            t.setTime(hour, minute, second).showTime();
        }
        if(i % 4 == 2)
            t.inputTime().showTime();
        if(i % 4 == 3)
        {
            int hour, minute, second;
            cin>>hour>>minute>>second;
            t.hour(hour);
            t.minute(minute);
            t.second(second);
            t.showTime();
        }
    }
}

/**************************************************************
	Problem: 1389
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:2364 ms
	Memory:1268 kb
****************************************************************/

