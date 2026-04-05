#include <iostream>
#include <string>
using namespace std;

int main() {
  string s = "dfa12321afd";

  int largest = -1;
  int second_largest = -1;

  for(int i=0; i <s.size(); i++) {
    char c = s[i];
    if(c >= '0' && c <= '9') {
      int num = c - '0';

      if(num > largest) {
        second_largest = largest;
        largest = num;
      }
      else if(num > second_largest && num < largest) {
        second_largest = num;
      }
    }
  }
  cout<<second_largest;
  return 0;
}
