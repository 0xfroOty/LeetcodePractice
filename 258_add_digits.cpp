#include <iostream>
using namespace std;

int main() {
  int num = 475;

  if(num == 0) {
    cout<<"0";
  } else if(num%9 == 0) {
    cout<<"0";
  } else {
    cout<<num%9;
  }
  return 0;
}
