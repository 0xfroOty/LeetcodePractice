#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

int main() {
  string s = "IceCreAm";

  unordered_set<char>  vowels = {'a','e','i','o','u','A','E','I','O','U'};

  int i = 0; 
  int j = s.size() -1;

  while(i < j) {
    if(vowels.count(s[i]) && vowels.count(s[j])) {
      swap(s[i], s[j]);
      i++;
      j--;
    }

    else if(!vowels.count(s[i])) {
      i++;
    }

    else if(!vowels.count(s[j])) {
      j--;
    }
  }

  cout<<s;
  return 0;
}
