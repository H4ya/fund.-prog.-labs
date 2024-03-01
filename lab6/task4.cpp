#include <iostream>
#include <string>
using namespace std;

string removeChar (string x,char c){
  string newstr="";
  for (int i = 0 ; i< x.size() ; i++){
    if (x[i] != c)
      newstr+=x[i];
  }
  return newstr;
}
int main(){
  
  string words;
  char c;
  cout << "Enter a string: ";
  cin>>words;
  cout << "Enter a character: ";
  cin>>c;
  cout<<removeChar(words,c);

  return 0;
}
