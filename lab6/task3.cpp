#include <iostream>
#include <string>
using namespace std;
bool isPalindrom (string x){
  int len = x.length();
  int i ,h;
  for(i=0,h=len-1; i < h ; i++, h--){
    if (x[i] != x[h]){
      return false;
      break;
    }
    return true;
  }
}
int main(){
  
  string word;
  cout << "Enter a string: ";
  cin>>word;
  cout<<((isPalindrom(word)==1)? "Its Palindrom" : "Not Palindrom" );

  return 0;
}
