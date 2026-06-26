#include <iostream>
#include <string>
using namespace std;

main() {
    string code;
    int attempts = 0;
    const string correctCode = "BEE208";

    while(attempts < 3) {
        cout << "Enter laboratory access code: ";
        cin >> code;

        if(code == correctCode) {
            cout << "Access granted." << endl;
            return 0; 
        } else {
            attempts++;
            cout << "Incorrect code. Attempts left: " << (3 - attempts) << endl;
        }
    }

    cout << "Access denied. Maximum attempts reached." << endl;
    
    
    return 0;
}

