#include <iostream>
using namespace std;

main() {
    double reading, sum = 0;
    int validCount = 0;

    cout << "Enter 12 sensor readings (999 = faulty):\n";

    for(int i = 1; i <= 12; i++) {
        cout << "Reading " << i << ": ";
        cin >> reading;

        if(reading == 999) {
            cout << "Faulty sensor value skipped.\n";
            continue; 
        }

        sum += reading;
        validCount++;
    }

    if(validCount > 0) {
        double average = sum / validCount;
        cout << "\nAverage of valid readings = " << average << endl;
    } else {
        cout << "\nNo valid readings entered.\n";
    }

return 0;
}

