#include <iostream>
#include <string>
using namespace std;

int main() {
   string names[100];
    string name;
    int index=0;
   cout << "Enter a list of names (enter a dot to finish):\n";

    int count = 0;
    while (true) {
      cin >> name;
        if (name == ".") {
            break;
        }
        names[count] = name;
        count++;
    }

   string search;
    cout << "Enter the name you want to search for: ";
    cin >> search;

    //int occurrences = 0;
    bool found=false;
    for (int i = 0; i < count; i++) {
        if (names[i] == search) {
            index=i;
            //occurrences++;
            found=true;
            break;
        }
    }
    if (found){
         cout << "First occurrences of \"" << search << "\" in index "<<index;
        //cout << occurrences << endl;
    }
    else
        cout << "No occurrences of " << search << " are found.\n";
    

    return 0;
}
