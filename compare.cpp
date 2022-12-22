#include <iostream>
using namespace std;
class SecondNumber;
class FirstNumber
{
private:
    int firstclassnumber;

public:
    void setDetails(int num)
    {
        firstclassnumber = num;
    }
    int GivemeValue()
    {
        return firstclassnumber;
    }
    friend void Compare(FirstNumber &FirstNumber, SecondNumber &SecondNumber);
};
class SecondNumber
{
private:
    int secondclassnumber;

public:
    void setDetail(int num)
    {
        secondclassnumber = num;
    }
    int GivemeValue()
    {
        return secondclassnumber;
    }
    friend void Compare(FirstNumber &FirstNumber, SecondNumber &SecondNumber);
};
void Compare(FirstNumber &FirstNumber, SecondNumber &SecondNumber)
{
    if ((FirstNumber.GivemeValue()) > (SecondNumber.GivemeValue()))
    {
        cout << FirstNumber.GivemeValue() << " is greater." << endl;
    }
    else
    {
        cout << SecondNumber.GivemeValue() << " is Greater." << endl;
    }
}

int main()
{
    FirstNumber f;
    SecondNumber s;
    f.setDetails(10);
    s.setDetail(20);
    Compare(f, s);
    return 0;
}