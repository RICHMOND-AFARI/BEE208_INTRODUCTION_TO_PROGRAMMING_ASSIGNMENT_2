#include <iostream>
using namespace std;

main() {
    double power, time, energy, totalEnergy = 0;

    cout << "Enter power rating (W) and usage time (hours) for 8 appliances:\n";

    for(int i = 1; i <= 8; i++) {
        cout << "\nAppliance " << i << ":\n";
        cout << "Power rating (W): ";
        cin >> power;
        cout << "Usage time (hours): ";
        cin >> time;

        energy = power * time;  
        cout << "Energy consumed = " << energy << " Wh\n";

        totalEnergy += energy;  
    }

    cout << "\nTotal Energy Consumed by all appliances = "
         << totalEnergy << " Wh" << endl;

    return 0;
}

