#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
        cout << "Welcome to Playing with Integer Lists\n" << endl;
        vector<int> vec;
        char inp {'Z'};

        do {
            // Initializinging the menu
            cout << "Main Menu:\n" << endl;
            cout << "P - Print numbers" << endl;
            cout << "A - Add a number" << endl;
            cout << "M - Display the mean of the numbers" << endl;
            cout << "S - Display the smallest number" << endl;
            cout << "L - Display the largest number" << endl;
            cout << "Q - Quit" << endl;
            cout << "\nEnter your choice: " << endl;
            cin >> inp;

            // If inp is P
            if (inp == 'P' || inp =='p') {
                    if (vec.size() == 0) {
                            cout << "\n#########################" << endl;
                            cout << "The list is currently empty." << endl;
                            cout << "#########################\n";
                    } else {
                            cout << "\n#########################" << endl;
                            cout << "The values of the list are: ";
                            for (auto val : vec) {
                                    cout << val << ", ";
                            }
                            cout << "(end of list)" << endl;
                            cout << "#########################\n" << endl;
                    }
            }
            // If inp is A
            if (inp == 'A' || inp == 'a')
            {
                    int number {};
                    cout << "\nPlease add the number of your choice: ";
                    cin >> number;
                    vec.push_back(number);
                    cout << endl;
            }
            // If inp is M
            if (inp == 'M' || inp == 'm') {
                    if (vec.size() == 0) {
                            cout << "\n#########################" << endl;
                            cout << "The list is currently empty." << endl;
                            cout << "#########################\n" << endl;
                    } else {
                            int total = 0;
                            for (auto num : vec)
                                    total += num;
                            cout << "\n#########################" << endl;
                            cout << "The mean is: " << setprecision(2) << static_cast<float>(total) / vec.size() << endl;
                            cout << "#########################\n" << endl;
                    }
            }
            // If inp is S or M
            if (inp == 'S' || inp == 's' || inp == 'L' || inp == 'l') {
                    if (vec.size() == 0) {
                            cout << "\n#########################" << endl;
                            cout << "The list is currently empty." << endl;
                            cout << "#########################\n" << endl;
                    } else if (vec.size() == 1) {
                            cout << "\n#########################" << endl;
                            cout << "Only one value in the list: " << vec.at(0) << endl;
                            cout << "#########################\n" << endl;
                    } else {
                            int min = vec.at(0);
                            int max = vec.at(0);
                            for (auto num : vec) {
                                    if (num < min)
                                            min = num;
                                    if (num > max)
                                            max = num;
                            }
                            if (inp =='S' || inp == 's') {
                                    cout << "\n#########################" << endl;
                                    cout << "The smallest number is: " << min << endl;
                                    cout << "###########################\n" << endl;
                            }
                            else {
                                    cout << "\n#########################" << endl;
                                    cout << "The largest number is: " << max <<endl;
                                    cout << "#########################\n" << endl;
                            }
                    }
            }
            // if inp is illegitimate
            if (inp != 'P' && inp != 'p' && inp != 'A' && inp != 'a' && inp != 'M' && inp != 'm' && inp != 'S' && inp != 's' && inp != 'L' && inp != 'l')
            {
                    cout << "\n#########################" << endl;
                    cout << "Please select a valid letter." << endl;
                    cout << "#########################\n" << endl;
            }
        } while (inp != 'Q' && inp != 'q');
        return 0;
}
