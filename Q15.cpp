#include <iostream>
using namespace std;

main() {
    double voltage, current, resistance;
    char choice;

    do {
        cout << "Enter voltage (V): ";
        cin >> voltage;
        cout << "Enter current (A): ";
        cin >> current;

        if(current != 0) {
            resistance = voltage / current;
            cout << "Resistance = " << resistance << " Ohms\n";
        } else {
            cout << "Error: Current cannot be zero.\n";
        }

        cout << "Do you want to continue? (Y/N): ";
        cin >> choice;

    } while(choice == 'Y' || choice == 'y');

    cout << "Program stopped.\n";
 return 0;
}
