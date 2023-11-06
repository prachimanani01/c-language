#include <iostream>

using namespace std;

Prime(int num) {
    if (num <= 1) {
        return false; 
    }

    if (num == 2) {
        return true; 
    }

    if (num % 2 == 0) {
        return false; 
    }

    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) {
            return false; 
        }
    }

    return true; 
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (Prime(num)) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }

    return 0;
}