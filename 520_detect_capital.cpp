#include <iostream>
#include <string>
using namespace std;

int main() {
  string s = "Lollipop";
  int n = 8;

  if(n == 1){
    cout<<"true";
    return 0;
  }

  if(s[1] >= 'A' && s[1] <= 'Z') {
    for(int i=0; i<n; i++) {
      if(!(s[i] >= 'A' && s[i] <= 'Z')) {
        cout<<"false";
        return 0;
      }
    }
  } else {
    for(int i=1; i<n; i++) {
      if(!(s[i] >= 'a' && s[i] <= 'z')) {
        cout<<"false";
        return 0;
      }
    }
  }
  cout<<"true";
  return 0;
}
