#include <iostream>
using namespace std;

int main() {
  int n = 9;

  while(n > 2 && n % 3 ==0) {
    n /= 3;
  }
  
  if(n == 1) {
    cout<<"true";
    return 0;
  }else {
    cout<<"false";
    return 0;
  }
}
