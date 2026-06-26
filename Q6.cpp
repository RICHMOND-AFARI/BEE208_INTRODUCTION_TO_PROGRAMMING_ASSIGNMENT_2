#include <iostream>
using namespace std;

int main() {
    int choice;
    double primaryTurns, secondaryTurns;
    double primaryVoltage, secondaryVoltage;

    cout << "Transformer Ratio Calculator Menu\n";
    cout << "1. Calculate turns ratio\n";
    cout << "2. Calculate secondary voltage\n";
    cout << "3. Calculate primary voltage\n";
    cout << "Select an option (1-3): ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Enter primary turns: ";
            cin >> primaryTurns;
            cout << "Enter secondary turns: ";
            cin >> secondaryTurns;
            cout << "Turns Ratio = " << primaryTurns / secondaryTurns << endl;
            break;

        case 2:
            cout << "Enter primary voltage: ";
            cin >> primaryVoltage;
            cout << "Enter primary turns: ";
            cin >> primaryTurns;
            cout << "Enter secondary turns: ";
            cin >> secondaryTurns;
            cout << "Secondary Voltage = "
                 << (primaryVoltage * secondaryTurns / primaryTurns) << " V" << endl;
            break;

        case 3:
            cout << "Enter secondary voltage: ";
            cin >> secondaryVoltage;
            cout << "Enter primary turns: ";
            cin >> primaryTurns;
            cout << "Enter secondary turns: ";
            cin >> secondaryTurns;
            cout << "Primary Voltage = "
                 << (secondaryVoltage * primaryTurns / secondaryTurns) << " V" << endl;
            break;

        default:
            cout << "Invalid selection. Please choose 1, 2, or 3." << endl;
    }

    return 0;
}

