#include <iostream>
#include <string>
using namespace std;

int main() {
  string s = "What is the solution to this problem";
  int k = 4;

  string answer = "";
  int space = 0;

  for(int i=0; i<s.size(); i++) {
    if(s[i] == ' ') {
      space++;
    } if(space == k) {
      break;
    }
    answer += s[i];
  }
  cout<<answer<<" ";
  return 0;
}
