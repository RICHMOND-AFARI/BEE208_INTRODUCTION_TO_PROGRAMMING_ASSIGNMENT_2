#include <iostream>
using namespace std;

main() {
    double resistance;

    cout << "Enter earth resistance readings (Ohms):\n";

    while(true) {
        cout << "Resistance: ";
        cin >> resistance;

        if(resistance > 5) {
            cout << "Earth resistance too high. Improve earthing system.\n";
            break;
        }
    }



return 0;
}

