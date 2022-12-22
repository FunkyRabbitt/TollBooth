#include <iostream>
using namespace std;
class Info
{
private:
    int data;

public:
    Info();
    int display()
    {
        return data;
    }
    ~Info();
};

Info::Info() { data = 10; }
Info::~Info() { data = 0; }

int main()
{
    Info i;
    {
        Info j;
        cout << "We are inside the inner scope" << endl;
        cout << "J's data =" << j.display() << endl;
    }
    cout << "We are in i's scope" << endl;
    cout << "I's data = " << i.display() << endl;
    return 0;
}