#include <iostream>
#include <string>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    string array[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }

    int direction;
    cout << "Enter the direction of shift (1 for right, 2 for left): ";
    cin >> direction;

    int shiftNo;
    cout << "Enter the number of cells each item will be shifted: ";
    cin >> shiftNo;

    string replaceValue = "0";
    cout << "Enter the value that will replace discarded values (default is 0): ";
    cin >> replaceValue;

    string newArray[size];
    for (int i = 0; i < size; i++) {
        newArray[i] = replaceValue;
    }

    for (int i = 0; i < size; i++) {
        if (direction == 1) { // right shift
            if (i + shiftNo < size) {
                newArray[i + shiftNo] = array[i];
            }
        } else if (direction == 2) { // left shift
            if (i - shiftNo >= 0) {
                newArray[i - shiftNo] = array[i];
            }
        }
    }

    cout << "The shifted array is: ";
    for (int i = 0; i < size; i++) {
        cout << newArray[i] << " ";
    }
    cout << endl;

    return 0;
}