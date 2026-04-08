#include <iostream>
using namespace std;

int main() {
  int n = 16;

  while(n > 0 && n % 2 == 0) {
    n /= 2;
  }
  
  if(n == 1) {
    cout<<"true";
    return 0;
  }else {
    cout<<"false";
    return 0;
  }
}
