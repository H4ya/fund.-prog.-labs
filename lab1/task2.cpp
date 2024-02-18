#include <iostream>
using namespace std;
int main() {
    const int SIZE=5;
    int arrA[SIZE],arrB[SIZE],arrC[SIZE+SIZE];
    cout<<"Please enter array 1: "<<endl;
    for(int i=0;i<SIZE;i++){
        cin>>arrA[i];
        arrC[i]=arrA[i];
    }
    cout<<"Please enter array 2: "<<endl;
    for(int i=0;i<SIZE;i++){
        cin>>arrB[i];
        arrC[i+SIZE]=arrB[i];
    }
    cout<<endl<<"the value of arrC= ";
    for(int i=0;i<SIZE+SIZE;i++){
        cout<<arrC[i]<<' ';
    }
    cout<<endl<<"_________________";
    return 0;
}