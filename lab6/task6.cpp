#include <iostream>

#include <string>

using namespace std;

double salary (double x, double y){
  return x*y;
}

int main(){

  double hours,hoursRate;
  int num=0, emplyNo=1;

  
  while(num>=0){
    
    cout<<"Enter the hours and hourRate for employee #"<<emplyNo<<" : ";
    cin>>hours>>hoursRate;

    cout<<"The salary for employee #"<<emplyNo++<<" is $"<<salary(hours,hoursRate);
    cout<<endl<<"Do you want to try other three numbers (Negative value to Exit)";
    cin>>num;
    cout<<endl;
  }
  cout<<"---------------------------------";
  return 0;
}
