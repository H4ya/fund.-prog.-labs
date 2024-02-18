#include <iostream>
#include <string>

using namespace std;


int main() {
    string students[] = {"Ali","Noor","Mohammed", "Ahmed", "Fatima", "Noor"};

    int size = sizeof(students) / sizeof(students[0]);

    for (int i = 0; i < size-1; i++) {     
        for (int j = 0; j < size-i-1; j++) {
            if (students[j] > students[j+1]) {
                string temp = students[j];
                students[j] = students[j+1];
                students[j+1] = temp;
            }
        }
    }

    for (int i = 0; i < size; i++) {
        cout << students[i] << endl;
    }

    return 0;
}
