#include <iostream>
using namespace std;
int main(){


    int size;
    double max, min, sum=0;

    cout<<" Enter your array size: "; cin>>size;
    cout<<"\n -----------------------";

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout<<" Enter item #"<<i+1<<" value: ";
        cin>>arr[i];
        sum+=arr[i];
        if(i==0){
            min=arr[i];
            max=arr[i];
        }

        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }

    }

    cout<<"\n Sum of the array is: "<<sum<<"\n";
    cout<<"\n Maximum value is: "<<max<<"\n";
    cout<<"\n Minimum value is: "<<min<<"\n";
    cout<<"\n The Average is: "<<sum/size<<"\n";

    return 0;
}
