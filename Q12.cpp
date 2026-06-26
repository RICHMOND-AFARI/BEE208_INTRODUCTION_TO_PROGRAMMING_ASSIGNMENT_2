#include <iostream>
using namespace std;

int main() {
    double voltage;

    cout << "Enter solar panel voltage readings (V):\n";

    while(true) {
        cout << "Voltage: ";
        cin >> voltage;

        if(voltage < 18) {
            cout << "Solar panel voltage below operating level.\n";
            break;  
        }
    }


    return 0;
}

