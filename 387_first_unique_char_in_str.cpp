#include <iostream>
#include <string>
using namespace std;

int main() {
  string s = "leetcode";

  for(int i=0; i<s.size(); i++) {
    bool unique = true;

    for(int j=0; j<s.size(); j++) {
      if(i != j && s[i] == s[j]) {
        unique = false;
        break;
      }
    }
    if(unique){
      cout<<i;
      return 0;
    }
  }
  cout<<  -1;
  return 0;
}
