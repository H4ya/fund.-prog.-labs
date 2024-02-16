#include <iostream>
using namespace std;
int main()
{

    int size = 4;
    int direction;
    int shiftNo;
    string array[size];
    string newarray[size];
    int newIndex;
    string empty='';

    cout << "Hello! this array have " << size << " strings, please enter them\n";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    bool validi = true;
    while (validi)
    {
        cout << "\nPlease Enter: \n1 for right \n2 for left\nYour choice: ";
        cin >> direction;

        switch (direction)
        {
        case 1:

        for (int i = 0; i < size-shiftNo; i++)
        {
            /* code */
        }
        


            break;

        case 2:

            break;

        default:
            cout << "\nInvalid direction!";
            break;
        }

        cout << "\nThanks! now please enter the number of the direction you want it for shifting\n ";
    }

    return 0;
}
