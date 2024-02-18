#include <iostream>
using namespace std;
int main() {
    const int maxSize = 100;
    int numbers[maxSize];
    int size;

    cout << "Enter the size of the list: ";
    cin >> size;
    cout << "Enter " << size << " numbers: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> numbers[i];
    }

    // sort in descending order
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (numbers[j] < numbers[j + 1]) {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    cout << "Numbers in descending order: " << endl;
    for (int i = 0; i < size; i++) {
       cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
