#include <iostream>
using namespace std;

int main() {
    int rows, columns;

    cout << "Enter the number of rows in the matrix: ";
    cin >> rows;
    cout << "Enter the number of columns in the matrix: ";
    cin >> columns;

    int matrix[rows][columns];
    int transpose[columns][rows];

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cin >> matrix[i][j];
        }
    }

    
    for (int i = 0; i < columns; i++) {
        for (int j = 0; j < rows; j++) {
            transpose[i][j] = matrix[j][i];
        }
    }

    cout << "Transpose of the matrix:" << endl;
    for (int i = 0; i < columns; i++) {
        for (int j = 0; j < rows; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}