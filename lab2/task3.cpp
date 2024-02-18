#include <iostream>
using namespace std;

int main() {
    int noRows, noCols;
    cout << "Enter array size row : ";
    cin >> noRows;
    cout << "Enter array size cols : ";
    cin >> noCols;
    int items[noRows][noCols], rotatedItems[noRows][noCols];

    for (int i = 0; i < noRows; i++) {
        cout << "Enter row #" << (i + 1) << " items: ";
        for (int j = 0; j < noCols; j++) {
            cin >> items[i][j];
            rotatedItems[i][j] = items[i][j];
        }
    }

    int direction, columnNo;
    cout << "Enter direction (1 for up, -1 for down): ";
    cin >> direction;
    cout << "Enter column number to rotate: ";
    cin >> columnNo;

    for (int i = 0; i < noRows; i++) {
        int newIndex;
        if (direction > 0) {
            newIndex = (i + direction) % noRows;
        } else {
            newIndex = (i + direction + noRows) % noRows;
        }
        rotatedItems[newIndex][columnNo] = items[i][columnNo];
    }

    cout << "\nItems before rotation:\n";
    for (int i = 0; i < noRows; i++) {
        for (int j = 0; j < noCols; j++) {
            cout << items[i][j] << "\t";
        }
        cout << "\n";
    }

    cout << "\nItems after rotation:\n";
    for (int i = 0; i < noRows; i++) {
        for (int j = 0; j < noCols; j++) {
            cout << rotatedItems[i][j] << "\t";
        }
        cout << "\n";
    }

    return 0;
}
