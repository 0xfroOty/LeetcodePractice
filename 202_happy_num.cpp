#include <iostream>
using namespace std;

int nextnum(int n) {
  int sum =0;

  while(n > 0) {
    int num = n % 10;
    sum += num*num;
    n = n / 10;
  }
  return sum;
}

bool happy(int n) {
  int slow = n;
  int fast = n;

  while(true) {
    slow = nextnum(slow);
    fast = nextnum(nextnum(fast));

    if(fast == 1) {
      return true;
    } if(slow == fast) {
      return false;
    }
  }
}

int main() {
  int n =19;

  if(happy(n)){
    cout<<"happy";
  } else {
    cout<<"not happy";
  }
  return 0;
}
