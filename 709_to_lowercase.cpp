#include <iostream>
#include <string>
using namespace std;

int main() {
  string s = "UNIversitY";
  int n = s.size();

  for(int i=0; i<n; i++) {
    if(s[i] >= 'A' && s[i] <= 'Z') {
      s[i] = s[i] + 32;
    }
  }
  cout<<s;
  return 0;
}
