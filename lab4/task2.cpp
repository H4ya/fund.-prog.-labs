#include <iostream>
using namespace std;
int main() {
  string name;
  cout<<"Enter a name: ";
  cin>>name;
    for (int i = 0; i < name.size(); i++) {
        cout<<char(toupper(name[i]));
    }
    return 0;
}
