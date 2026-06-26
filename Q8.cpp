#include <iostream>
using namespace std;

int main() {
    double line1, line2, line3, avg;

    cout << "Enter current readings for 6 sets (Line1, Line2, Line3):\n";

    for(int set = 1; set <= 6; set++) {
        cout << "\nSet " << set << ":\n";
        cout << "Line 1 current: ";
        cin >> line1;
        cout << "Line 2 current: ";
        cin >> line2;
        cout << "Line 3 current: ";
        cin >> line3;

        avg = (line1 + line2 + line3) / 3.0;
        cout << "Average current for Set " << set << " = "
             << avg << " A" << endl;
    }
    
    return 0;
    }
