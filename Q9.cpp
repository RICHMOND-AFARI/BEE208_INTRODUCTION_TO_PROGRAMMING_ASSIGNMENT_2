#include <iostream>
using namespace std;

int main() {
    int result;
    int passed = 0, failed = 0;

    cout << "Enter test results for 15 components (1 = Pass, 0 = Fail):\n";

    for(int i = 1; i <= 15; i++) {
        cout << "Component " << i << ": ";
        cin >> result;

        if(result == 1) {
            passed++;
        } else if(result == 0) {
            failed++;
        } else {
            cout << "Invalid input! Please enter 1 or 0.\n";
            i--; 
        }
    }

    cout << "\nNumber of Passed Components = " << passed << endl;
    cout << "Number of Failed Components = " << failed << endl;

    return 0;
}

