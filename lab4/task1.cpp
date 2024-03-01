#include <iostream>
#include <cmath>
using namespace std;
int main() {
  int x1,x2,y1,y2;
  double d;
  cout<<"Please enter x1,x2,y1,y2 Accordingly:\n";
  cin>>x1>>x2>>y1>>y2;
  d=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
  cout<<"The distance between the two points is: "<<d;
    return 0;
}
