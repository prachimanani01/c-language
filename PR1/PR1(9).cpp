#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    if (n < 2) {
        cout << "The array should have at least two elements to find the second largest." << endl;
        return 1; 
    }

    int arr[n];

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int firstLargest = INT_MIN; 
    int secondLargest = INT_MIN; 

    for (int i = 0; i < n; i++) {
        if (arr[i] > firstLargest) {
            secondLargest = firstLargest;
            firstLargest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != firstLargest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN) {
        cout << "There is no second largest number in the array." << endl;
    } else {
        cout << "The second largest number in the array is: " << secondLargest << endl;
    }

    return 0;
}
