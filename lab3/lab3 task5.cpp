#include <iostream>
using namespace std;

int main() {
    int numbers[100];
    int num;

    cout << "Enter the number of elements: ";
    cin >> num;

    cout << "Enter the numbers:\n";
    for (int i = 0; i < num; i++) {
        cin >> numbers[i];
    }

    int x;
    cout << "Enter the number : ";
    cin >> x;

    int count = 0;
    for (int i = 0; i < num; i++) {
        if (numbers[i] == x) {
            count++;
        }
    }

    cout << "was found  " << x << " number of times. " << count << endl;

    return 0;
}
