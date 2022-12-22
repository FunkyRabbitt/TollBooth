#include <iostream>
using namespace std;

class Distance
{
    public:
    int km;
    int m;
    void setDetails();
    void displayDetails();
} d1, d2, sum;

int main()
{
    cout << "Enter 1st distance," << endl;
    cout << "Enter km: ";
    cin >> d1.km;
    cout << "Enter m: ";
    cin >> d1.m;
    cout << "\nEnter information for 2nd distance" << endl;
    cout << "Enter km: ";
    cin >> d2.km;
    cout << "Enter m: ";
    cin >> d2.m;

    sum.km = d1.km + d2.km;
    sum.m = d1.m + d2.m;

    // changing to km if m is greater than 1000
    if (sum.m >= 1000)
    {
        // extra km
        int extra = sum.m / 1000;

        sum.km += extra;
        sum.m -= (extra * 1000);
    }

    cout << endl << "Sum of distances = " << sum.km << " km  " << sum.m << " meters";
    return 0;
}
