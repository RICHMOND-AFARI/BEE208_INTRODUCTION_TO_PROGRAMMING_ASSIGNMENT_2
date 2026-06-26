#include<iostream>
using namespace std;

main() {
    double wattage[12];   
    double total;

    cout << "Enter wattage of 12 lighting points:\n";
    for(int i = 0; i < 12; i++) {
        cout << "Lighting point " << (i+1) << ": ";
        cin >> wattage[i];
        total += wattage[i]; 
    }

    cout << "\nTotal Lighting Load = " << total << " W" << endl;

    return 0;
}

