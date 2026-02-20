#include <iostream> // for cin and cout
#include <cstdlib> // required for srand for random throw of a dice
#include <ctime> // required for time as seed for srand 
using namespace std;

int main() {
    int sider, resultat;
    
    // Initialiserer tilfældighedsgeneratoren
    srand(time(0));
    
    cout << "Velkommen til terningekast-simulatoren" << endl;
    cout << "--------------------------------------" << endl;
    cout << endl;
    
    cout << "Hvor mange sider skal terningen have? ";
    cin >> sider;
    cout << endl;
    
    // Genererer tilfældigt tal mellem 1 og antal sider
    resultat = (rand() % sider) + 1; // genere
    
    cout << "Du kastede terningen..." << endl;
    cout << endl;
    cout << "Resultat: " << resultat << endl;
    cout << endl;
    
    return 0;
}
