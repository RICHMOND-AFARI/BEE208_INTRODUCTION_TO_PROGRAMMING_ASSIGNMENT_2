#include <iostream>
using namespace std;

main() {
    double temp;

    cout << "Enter motor temperature readings (°C):\n";

    while(true) {
        cout << "Temperature: ";
        cin >> temp;

        if(temp > 90) {
            cout << "Motor temperature unsafe. Stop motor test.\n";
            break;  
        }
    }

    return 0;
}

