#include <iostream>

using namespace std;

int evaluate(int x, int y){
  if( x == y ) return 0;
  else if ( x < y ) return 1;
  else return -1;
}

int main(){
  int num = 1 + rand() % ( 50 - 1 + 1 );
  int guess;
  while( true ){
    cout << "Guess a number between 1 and 50: ";
    cin>> guess;
    if (evaluate( num , guess ) == -1 )
      cout<<"Your guess is less than the number\n";

    else if (evaluate( num , guess ) == 1 )
      cout<<"Your guess is greater than the number\n";

    else{
      cout<<"You Win!!";
      break;
    }
    
  }
  return 0;
}
