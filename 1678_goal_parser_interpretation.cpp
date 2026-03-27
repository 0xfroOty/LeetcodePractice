#include <iostream>
using namespace std;

int main() {
  string command = "G()()()()(al)";
  
  string ans;

  for(int i=0; i<command.size(); i++) {
    if(command[i] == 'G'){
      ans += 'G';
    } if(command[i] == '(' && command[i+1] == ')') {
      ans += 'o';
      i += 1;
    } if(command[i] == '(' && command[i+1] == 'a') {
      ans += "al";
      i += 3;
    }
  }
  cout<<ans;
  return 0;
}
