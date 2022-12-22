#include <iostream>
#include <string.h>
using namespace std;
class TollBooth
{
private:
    int carNumber, payBalance, totalBalance, payCar, nopayCar, addchoice, totalcar;
    bool exit = true;
    char choice;

public:
    char InitialChoice[50] = " ";
    TollBooth();
    void payingCar()
    {
        payCar++;
        carNumber++;
    }
    void noPayCar()
    {
        carNumber++;
        nopayCar++;
    }
    void display()
    {
        cout << "Total number of car Passed: " << carNumber << endl;
        cout << "Total number of Paid car Passed: " << payCar << endl;
        cout << "Total number of Unpaid car passed: " << nopayCar << endl;
        Total();
    }
    void Total()
    {
        totalBalance = payCar * 5;
        cout << "Total amount Collected: " << totalBalance << endl;
    }
    void errorMessage()
    {
        cout << endl
             << endl
             << "+--------------------------------------------------+" << endl;
        cout << "|    Invalid choice                                |" << endl;
        cout << "+--------------------------------------------------+" << endl
             << endl;
    }
    void displayMenu()
    {
        cout << endl
             << "+------------------- Main Menu --------------------+" << endl;
        cout << "|    1. Add Car                                    |" << endl;
        cout << "+--------------------------------------------------+" << endl;
        cout << "|    2. Display Information                        |" << endl;
        cout << "+--------------------------------------------------+" << endl;
        cout << "|    3. Exit                                       |" << endl;
        cout << "+--------------------------------------------------+" << endl;
    }
    void TakingChoice()
    {
        cout << "Enter Your Choice: ";
        cin >> addchoice;
    }
    void checkPayOrNot()
    {
        cout << "Does Car Pay? [y/n]: ";
        cin >> choice;
        if (choice == 'y')
        {
            payingCar();
        }
        else if (choice == 'n')
        {
            noPayCar();
        }
        else
        {
            errorMessage();
        }
    }
    void ExitCar()
    {
        exit = false;
    }
    void MainFunction()
    {
        displayMenu();
        while (exit)
        {
            TakingChoice();
            if (addchoice == 1)
            {
                checkPayOrNot();
                displayMenu();
            }
            else if (addchoice == 2)
            {
                display();
                displayMenu();
            }
            else if (addchoice == 3)
            {
                ExitCar();
            }
            else
            {
                errorMessage();
            }
        }
    }
};
TollBooth::TollBooth()
{
    carNumber = 0;
    payBalance = 5;
    totalBalance = 0;
    payCar = 0;
    nopayCar = 0;
    // strcpy(choice, InitialChoice);
    addchoice = 0;
    totalcar = 0;
}
int main()
{
    TollBooth obj;
    obj.MainFunction();
    return 0;
}