#include <iostream>
using namespace std;

int main() {
  string address = "1.1.1.1";
  int n = address.size();

  string result;

  for(int i=0; i<n; i++) {
    if(address[i] == '.') {
      result += "[.]";
    } else {
      result += address[i];
    }
  }
  cout<<result;
  return 0;
}
