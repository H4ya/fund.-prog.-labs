#include <iostream>
using namespace std;
int main() {
  string pass;
  int strong=0;
  cout<<"Enter a password: ";
  cin>>pass;
  if(pass.length()>=8){
    strong++;
  }
  for (int i = 0; i < pass.size(); i++) {
      if (isupper(pass[i])){
        strong++;
        break;}
    }
  for (int i = 0; i < pass.size(); i++) {
      if (islower(pass[i])){
        strong++;
        break;}
    }
  for (int i = 0; i < pass.size(); i++) {
    if (isdigit(pass[i])){
      strong++;
      break;}
  }

  if(pass.length()>=6 && pass.length()<8 && strong==3){
    cout<<"Moderate password";
  }
  else if (strong==4){
    cout<<"Strong password";
  }
  else{
    cout<<"Weak password";
  }
    return 0;
}
