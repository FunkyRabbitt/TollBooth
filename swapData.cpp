#include <iostream>
using namespace std;
class Second;
class First
{
private:
    int a;

public:
    int setDetails()
    {
        return a;
    }
    friend void swap(First &First, Second &Second);
};
class Second
{
private:
    int b;

public:
    int setDetails()
    {
        return b;
    }
    friend void swap(First &First, Second &Second);
};

void swap(First &First, Second &Second)
{
    int z = First.a;
    First.a = Second.b;
    Second.b = z;
}
int main()
{
    First f;
    Second s;
    cout <<"Before Swap: "<< f.setDetails() << ' ' << s.setDetails() << endl;
    swap(f, s);
    cout <<"After Swap: "<< f.setDetails() << ' ' << s.setDetails() << endl;
    return 0;
}