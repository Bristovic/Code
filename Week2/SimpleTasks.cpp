#include <iostream>
using namespace std;

int main()
{
    int age, int1;
    cout << "Welcome to the program." << endl;
    cout << "What is your age? ";
    cin >> age;
    cout  << endl;

    if (age <= 25)
    {
        cout << "You are too young." << endl;
    } else if (age >= 65)
    {
        cout << "You are too old." << endl;
    } else
        cout << "Access granted." << endl;
    
    cout << "Input an integer. ";
    cin >> int1;

    if (int1=0)
    {
        cout << "The integer is 0.";
    } else if (int1>0)
    {
        cout << "The integer is positive." ;
    } else
        cout << "The integer is negative.";
    
    return 0;
}


