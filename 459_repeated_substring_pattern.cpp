#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  string s = "abab";

  for(int k =1; k <= s.size() / 2; k++) {
    if(s.size() % k != 0) {
      continue;
    }

    string sub = s.substr(0, k);
    string result = "";

    for(int i=0; i< s.size() / k; i++) {
      result += sub;
    }

    if(result == s) {
      cout<<"true";
      return 0;
    }
  }

  cout<<"false";
  return 0;
}
