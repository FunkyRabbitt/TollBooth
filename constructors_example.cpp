#include <iostream>
using namespace std;
class Example
{
public:
    int a, b;

public:
    Example();
    Example(int a, int b);
    Example(Example &e);
    void display()
    {
        cout << a << endl << b;
    }
};
Example::Example()
{
    // default constructor
    cout << "This is default constructor." << endl;
    a = 66;
    b = 77;
}
Example::Example(int x, int y)
{
    // parameterized constructor
    cout << "This is parameterized constructor.";
    a = x;
    b = y;
}
Example::Example(Example &e)
{
    // copy constructor
    cout << "Copy Constructor called.";
    a = e.a;
    b = e.b;
}
int main()
{
    Example obj;
    obj.display();
    Example obj1;
    obj1.display();
    Example obj2(obj1);
    obj2.display();
    return 0;
}
