#include <iostream>
using namespace std;

main() {
    double rating, totalLoad = 0;

    cout << "Enter up to 20 appliance power ratings (W):\n";

    for(int i = 1; i <= 20; i++) {
        cout << "Appliance " << i << " rating: ";
        cin >> rating;

        totalLoad += rating;

        if(totalLoad > 5000) {
            cout << "Maximum load exceeded. Stop adding appliances.\n";
            break;
        }
    }

    cout << "\nFinal Total Load = " << totalLoad << " W" << endl;

 return 0;
}

