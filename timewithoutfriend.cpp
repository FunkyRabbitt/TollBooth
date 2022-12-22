#include <iostream>
using namespace std;
class Time
{
    int Hour, Minute, Second;

public:
    void add(Time, Time);
    void input(int, int, int);
    void display();
};
int main()
{
    Time T1, T2, T3;
    T1.input(6, 50, 40);
    T2.input(9, 40, 30);
    T3.add(T1, T2);
    T3.display();
    return 0;
}
void Time::display()
{
    cout << "Hour: " << Hour << endl;
    cout << "Minute: " << Minute << endl;
    cout << "Second: " << Second << endl;
}
void Time::input(int h, int m, int s)
{
    Hour = h;
    Minute = m;
    Second = s;
}
void Time::add(Time t1, Time t2)
{
    Second = t1.Second + t2.Second;
    Minute = Second / 60;
    Second = Second % 60;
    Minute += t1.Minute + t2.Minute;
    Hour = Minute / 60;
    Minute = Minute % 60;
    Hour += t1.Hour + t2.Hour;
}