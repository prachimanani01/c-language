#include <iostream>
using namespace std;

int main() {
    char userInput;
    
    cout << "Enter a character representing a day of the week (M, T, W, t, F, S, or s): ";
    cin >> userInput;
    
    switch (userInput) {
        case 'M':
            cout << "Monday" << endl;
            break;
        case 'T':
            cout << "Tuesday" << endl;
            break;
        case 'W':
            cout << "Wednesday" << endl;
            break;
        case 't':
            cout << "Thursday" << endl;
            break;
        case 'F':
            cout << "Friday" << endl;
            break;
        case 'S':
            cout << "Saturday" << endl;
            break;
        case 's':
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Invalid input. Please enter a valid day abbreviation." << endl;
    }

    return 0;
}