#include <iostream>
#include <map>

using namespace std;

int main() {
    
    bool addNums = true;
    map<string, string> numbers;

    string name;
    string number;

    string addNum;

    cout << "Add new number? (Y/N): ";
    cin >> addNum;

    if (addNum == "Y" || addNum == "y") { // Corrected condition
        while (addNums == true) {
            cout << "Enter the name for a new number: ";
            cin >> name;
            cout << "";

            cout << "Enter the number to add a new number: ";
            cin >> number;
            cout << "";

            numbers.insert({name, number});

            cout << "Number Added!" << endl;


            cout << "Add another number? (Y/N): "; // Asking if the user wants to add another number
            cin >> addNum;
            if (addNum != "Y" && addNum != "y"){ // Exiting loop if user doesn't want to add another number
                cout << "Search for a number?: ";
                cout << "Enter name: ";
                cin >> name;

                auto itr = numbers.find(name); // Using find instead of iterating through the map
                if (itr != numbers.end()) {
                    cout << "The number for " << name << " is " << itr->second << endl;
                }
                else {
                    cout << "Didn't find." << endl; // Corrected message
                }
            }
            else if (addNum == "exit") {
                addNums = false;
            }
        }
    }
    else if (addNum == "N" || addNum == "n") { // Corrected condition
        cout << "Search for a number?: ";
        cout << "Enter name: ";
        cin >> name;

        auto itr = numbers.find(name); // Using find instead of iterating through the map
        if (itr != numbers.end()) {
            cout << "The number for " << name << " is " << itr->second << endl;
        }
        else {
            cout << "Didn't find." << endl; // Corrected message
        }
    }
    else {
        cout << "Invalid Command";
    }

    return 0;
}
