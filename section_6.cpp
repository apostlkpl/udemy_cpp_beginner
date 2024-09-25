#include <iostream>
using namespace std;

int main() {
        const float price_small {25.0};
        const float price_large {35.0};
        const float vat {0.06};
        const int valid {30}; // Valid for X number of days
        
        cout << "Hello, welcome to Frank\'s Carpet Cleaning Service\n" << endl;
        int small {0};
        int large {0};
        cout << "How many small rooms would you like cleaned? ";
        cin >> small;
        cout << "\nHow many large rooms would you like cleaned? ";
        cin >> large;

        float cost = small * price_small + large * price_large;
        float tax = cost * vat;
        float total = cost + tax;

        cout << "\nEstimate for carpet cleaning service" << endl;
        cout << "Number of small rooms: " << small << endl;
        cout << "Number of large rooms: " << large << endl;
        cout << "Price per small room: $" << price_small << endl;
        cout << "Price per large rooms: $" << price_large << endl;
        cout << "Cost : $" << cost << endl;
        cout << "Tax : $" << tax << endl;
        cout << "=============================" << endl;
        cout << "Total estimate: $" << total << endl;
        cout << "This estimate is valid for " << valid << " days" << endl;
}
