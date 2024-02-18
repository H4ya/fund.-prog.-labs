#include <iostream>
#include <string>

using namespace std;


int main() {
    int temp;
    int size=10;
    int arr[size];
    int temarr[size];

    for (int i = 0; i < size; i++) { 
        cout<<"Enter arr["<<i<<"] ";   
        cin>>arr[i];
        temarr[i]=arr[i];
        cout<<endl;
    }
    for (int i = 0; i < size-1; i++) {     
        for (int j = 0; j < size-i-1; j++) {
            if (temarr[j] > temarr[j+1]) {
                temp = temarr[j];
                temarr[j] = temarr[j+1];
                temarr[j+1] = temp;
            }
        }
    }
    bool equal = true;
    for (int i = 0; i < size; i++) {
        if (temarr[i]!=arr[i]){
            equal=false;
            break;
        }
    }
    cout<<(equal?"Orderd":"Unordered");
    return 0;
}
