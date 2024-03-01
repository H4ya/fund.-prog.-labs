#include <iostream>
#include <string>
using namespace std;
void ascSort (int x, int y, int z){
  int temp;
  if (y>x){
    temp = y;
    y=x;
    x=temp;
  }
  if (z>x){
    temp = z;
    z=x;
    x=temp;
  }
  if (z>y){
    temp = z;
    z=y;
    y=temp;
  }
  cout << x << " " << y << " " << z << endl;
}
int main(){
  int x,y,z,num=0;

  while(num>=0){
    
    cout<<"Enter three integer numbers: ";

    cin>>x>>y>>z;

    ascSort(x,y,z);

    cout<<endl<<"Do you want to try other three numbers (Negative value to Exit)\n";
    cin>>num;
  }
  cout<<"---------------------------------";
  return 0;
}
