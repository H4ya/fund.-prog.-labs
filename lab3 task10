#include <iostream>
#include <string>

using namespace std;


int main() {

    int temp;
    int size=10;
    int arr[size];
    for (int i = 0; i < size; i++) { 
        cout<<"Enter arr["<<i<<"] ";   
        cin>>arr[i];cout<<endl;
    }
    for (int i = 0; i < size-1; i++) {     
        for (int j = 0; j < size-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}
