#include <iostream>
using namespace std;
int main(){

    int size=4;
    int direction;
    int rotateNo;
    string array[size];
    string newarray[size];
    int newIndex;

    cout<<"Hello! this array have "<<size<<" strings, please enter them\n";
    for(int i=0; i<size;i++){
        cin>>array[i];
    }
    cout<<"\nThanks! now please enter the number of the direction you want it for rotaion\n ";
    bool validNo=true; 
    while (validNo){
        cout<<"\nplease Enter: \n1 for right \n2 for left\nYour choice: ";cin>>direction;
        switch (direction){
            case 1:
                cout<<"\nFinally, please enter the number of rotation you want: ";
                cin>>rotateNo;
                cout<<"\n--------------------------------\n";


            for (int i=0; i<size; i++){
                newIndex =rotateNo+i;
                if (newIndex>=size){
                    newIndex%=size;
                }
                newarray[newIndex]=array[i];
        
            }
            for (int i = 0; i < size; i++){
                cout<<newarray[i]<<endl;
            }



                validNo=false;
                break;
            case 2:
                cout<<"\nFinally, please enter the number of rotation you want: ";
                cin>>rotateNo;

                for (int i=0; i<size; i++){
                    newIndex =rotateNo+i;
                    if (newIndex>=size){
                        newIndex%=size;
                    }
                    newarray[newIndex]=array[i];
                
                }
                for (int i = size-1; i >= 0; i--){
                    cout<<newarray[i]<<endl;
                }

                validNo=false;
                break;
            default:
                cout<<"\nWrong choice!\n";
                break;
        }
    }



    return 0;
}
