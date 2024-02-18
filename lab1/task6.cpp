
// I didn't put a function since we did not take it yet.
#include <iostream>
using namespace std;
int main(){
    int StdNo;
    cout<<"StdNo: "; cin>>StdNo;
    int max=0, bestStd=0;
    double avg;
    int marks[StdNo];
    string names[StdNo];
    for(int i=0; i<StdNo; i++){
        cout<<endl<<"Student#"<<i+1<<" Name: "; cin>>names[i];
        cout<<endl<<"Student#"<<i+1<<" Mark: "; cin>>marks[i];
        cout<<endl;
        if (marks[i]>max){
            max=marks[i];
            bestStd=i;
            }
        avg+=marks[i];
    }

    avg=avg/StdNo;
    cout<<endl<<"Student with max mark is " << names[bestStd]<< "of mark "<<max;
    cout<<endl<<"Average Mark: "<<avg;

    for (int i = 0; i < StdNo; i++)
    {
        
        if (marks[i]>avg){
            cout<<endl<< names[i]<<" with mark equal to: "<<marks[i];
        }


    }
    



return 0;}