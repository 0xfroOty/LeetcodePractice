#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  string haystack = "sadbutsad";
  string needle = "sad";

  if(needle.size() > haystack.size()){
    cout<< -1;
    return 0;
  }

  for(int i=0; i<= haystack.size() - needle.size(); i++) {
    bool yes = true;

    for(int j=0; j < needle.size(); j++) {
      if(haystack[i + j] != needle[j]) {
        yes = false;
        break;
      }
    }
    
    if(yes) {
      cout<<i;
      return 0;
    }
  }
  cout<< -1;
  return 0;
}
