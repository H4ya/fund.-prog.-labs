#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int main(){
    
    int size;
    cin>>size;
    cout<<"enter elements: ";
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    
    for(int i=size;i>0;i--){
        cout<<arr[i-1]<<' ';
    }
    
    return 0;
}