#include <iostream>

#include <string>

using namespace std;

void menu (){
  cout<<"A : Convert from meters to feet\nB : Convert from feet to meters";
}
double calc(char c, int num){
  if (c == 'A'){
    return num*3.28084;
  }
  else if (c == 'B'){
    return num/3.28084;
  }
  else return -1;
}

int main(){
  cout<<"Please Enter the distance value: ";
  int distance;
  cin>>distance;
  cout<<"Please choose from the menu:\n"; 
  menu();
  char choice;
  double meters, feet;
  cout<<"\nEnter a choice: ";
  cin>>choice;  
  if (calc(choice, distance) == -1)
    cout<<"\nInvalid Choice";
  else
    cout<<"\nThe distance in "<<choice<<" is "<<calc(choice, distance);
  

  return 0;
}
