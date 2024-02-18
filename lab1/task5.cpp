#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int main(){
    
    int StdNo;
    double passStd=0, failStd=0, incorrectStd=0;
    cout<<"Enter the Number of students: ";
    cin>>StdNo;
    cout<<"\nEnter marks: ";
    int arr[StdNo];
    for(int mark=0;mark<StdNo;mark++){
        cin>>arr[mark];

        
        if (arr[mark]<0 || arr[mark]>100)
        {
            incorrectStd++;
        }
        else if (arr[mark]>=50){
            passStd++;
        }
        else if (arr[mark]<50){
            failStd++;
        }
    }
    cout<<"----------------\n";
    cout<<"Percentage of passed students="<<(passStd/StdNo)*100<<"%\n";
    cout<<"Percentage of failed students="<<(failStd/StdNo)*100<<"%\n";
    cout<<"Percentage of incorrect students="<<(incorrectStd/StdNo)*100<<"%\n";

    return 0;
}