#include <iostream>
using namespace std;

main() {
    double reading, total = 0;

    cout << "Enter 10 power readings:\n";

    for(int i = 1; i <= 10; i++) {
        cout << "Reading " << i << ": ";
        cin >> reading;

        if(reading < 0) {
            cout << "Invalid reading skipped.\n";
            continue; 
        }

        total += reading; 
    }

    cout << "\nTotal of valid power readings = " << total << " W" << endl;

return 0;
}

