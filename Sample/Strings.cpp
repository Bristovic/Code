#include <iostream>
// #include <string>  // unnecessary with iostream
using namespace std;

//initialise main function

int main()
{
    string ing1;
    ing1 = "beanburger";
    cout << ing1 << endl;

    string ing2;
    ing2 = "toast";
    cout << ing2 << endl;

    cout << ing1 + " and " + ing2 << endl;

    // Some other string funcs
    cout << ing1.size() << endl; // Provides length
    
    string emptyString;
    emptyString = "";
    
    cout << "Is empty?" << ing1.empty() << endl; 
    cout << "Is empty?" << empty(emptyString) << endl;

    // Input
    string name;
    cin >> name;

    cout << "Name: " << name << endl;

    return 0;
}
