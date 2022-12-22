#include <iostream>
using namespace std;
class Time;
Time add(Time, Time);
class Time
{
    int hour, minute, second;

public:
    void setDetails(int, int, int);
    void displayDetails();
    friend Time add(Time, Time);
};
void Time::setDetails(int h, int m, int s)
{
    hour = h;
    minute = m;
    second = s;
}
void Time::displayDetails()
{
    cout << "Hour: " << hour << endl;
    cout << "Minute: " << minute << endl;
    cout << "Seconds: " << second << endl;
}
Time add(Time T1, Time T2)
{
    Time result;
    result.second = T1.second + T2.second;
    result.minute = result.second / 60;
    result.second = result.second % 60;
    result.minute += T1.minute + T2.minute;
    result.hour = result.minute / 60;
    result.minute = result.minute % 60;
    result.hour += T1.hour + T2.hour;
    return result;
}
int main()
{
    Time t1, t2, t3;
    t1.setDetails(6, 50, 20);
    t2.setDetails(9, 40, 30);
    t3 = add(t1, t2);
    t3.displayDetails();
    return 0;
}