#include <iostream>
using namespace std;

main() {
    double resistance;

    cout << "Enter up to 10 insulation resistance readings (in Megaohms):\n";

    for(int i = 1; i <= 10; i++) {
        cout << "Reading " << i << ": ";
        cin >> resistance;

        if(resistance < 1) {
            cout << "Insulation failure detected. Test stopped.\n";
            break; 
        } else {
            cout << "Insulation reading acceptable.\n";
        }
    }


    return 0;
}

