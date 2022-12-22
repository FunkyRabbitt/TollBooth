#include <iostream>
using namespace std;
class Distance
{
private:
    int meter;

    friend int addFive(Distance);

public:
    Distance() : meter(0) {
        
    }
};
int addFive(Distance d)
{

    d.meter += 17;
    return d.meter;
}
int main()
{
    Distance D;
    cout << "Distance from ktm to lalitpur: " << addFive(D) << "km" << endl;
    return 0;
}