#include <iostream>
using namespace std;
class Mountain;
friend void cmpheight();

class Mountain{
    int height;
    char name[50],location[50];
    public:
    void setinfo();
    void displayinfo();
    friend void cmpheight(Mountain, Mountain);
};

void cmpheight(Mountain 1, Mountain 2)
{
    if(M1.height>M2.height)
    {
        cout<<"The heighest mountain is: "<<M1.height;
    }
    else
    {
        cout<<"The height of the heighest mountain is "<<M2.height;
    }
}

void Mountain::setinfo()
{
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter height: ";
    cin>>height;
    cout<<"Enter Location: ";
    cin>>location;
}
void Mountain::displayinfo()
{
    cout<<"The details are: "<<endl;
    cout<<"Name: "<<name<<endl<<"Height: "<<height<<endl<<"Location: "<<location<<endl;
}
int main()
{
    Mountain M1,M2;
    M1.setinfo();
    M2.setinfo();
    M1.displayinfo();
    M2.displayinfo();
    cmpheight(M1,M2);
    return 0;
}
