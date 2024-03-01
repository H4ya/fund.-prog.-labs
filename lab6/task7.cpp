#include <iostream>

#include <string>

using namespace std;

bool isEven (int x){
  if (x%2==0)
    return true;
  else
    return false;
}

int main(){
  int sumEvens = 0, sumOdds = 0;
  int evens=0,odds=0;
  int start,end;
  cout << "Enter two numbers: ";
  cin >> start>>end;
  for (int i=start;i<end;i++){

    if (isEven(i)){
      evens++;
      sumEvens+=i;
    }
    else{
      odds++;
      sumOdds+=i;
    }
    }
  cout<<"Number of even numbers = "<<evens<<" and sum is = "<<sumEvens<<endl;
  cout<<"Number of odd numbers = "<<odds<<" and sum is = "<<sumOdds;

  return 0;
}
