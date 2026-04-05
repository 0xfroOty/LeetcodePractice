#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  string s = "abc";
  string t = "ahbgdc";

  if(s.size() == 0){
    cout<<"true";
    return 0;
  }

  int i=0;

  for(int j=0; j < t.size(); j++) {
    if(s[i] == t[j]) {
      i++;
    }

    if(i == s.size()) {
      cout<<"true";
      return 0;
    }
  }

  cout<<"false";;
  return 0;
}
