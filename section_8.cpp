#include <iostream>
using namespace std;

int main() {
        cout << "Calculating change" << endl;
        cout << "\nEnter an amount in cents: " << endl;
        int cents {};
        cin >> cents;
        if ((cents <= 0) || (cents >= 100)) {
                cout << "Please enter an amount between 1 and 99" << endl;
        } else {
                int quarters {}, dimes {}, nickels {}, pennies {};
                quarters = static_cast<int>(cents / 25);
                dimes = static_cast<int>((cents % 25) / 10);
                nickels = static_cast<int>(((cents % 25) - dimes * 10) / 5);
                pennies = static_cast<int>((cents % 25) - (dimes * 10) - (nickels * 5));
                cout << "\nYou can provide this change as follows:" << endl;
                cout << "Dollars: 0" << endl;
                cout << "Quarters: " << quarters << endl;
                cout << "Dimes: " << dimes << endl;
                cout << "Nickels: " << nickels << endl;
                cout << "Pennies: " << pennies << endl;
        }
        return 0;
}
