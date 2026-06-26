#include <iostream>
using namespace std;

main() {
    double voltage, current, power;
    char choice;

    do {
        cout << "Enter voltage (V): ";
        cin >> voltage;
        cout << "Enter current (A): ";
        cin >> current;

        power = voltage * current;
        cout << "DC Power = " << power << " W\n";

        cout << "Do you want to perform another calculation? (Y/N): ";
        cin >> choice;

    } while(choice == 'Y' || choice == 'y');

    cout << "Program stopped.\n";
 return 0;
}

