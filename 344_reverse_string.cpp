#include <iostream>
using namespace std;

int main() {
  string s = "hello";
  int n = 5;

  int i = 0;
  int j = n - 1;

  while(i < j) {
    swap(s[i], s[j]);
    i++;
    j--;
  }
  cout<<s<<" ";
  return 0;
}
