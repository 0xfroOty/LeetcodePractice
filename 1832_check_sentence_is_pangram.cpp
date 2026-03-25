#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main() {
  string arr = "thequickbrownfoxjumpsoverthelazydog";
  int n = arr.size();

  unordered_set<char>  alphabet;

  for(int i=0; i< n; i++) {
    alphabet.insert(arr[i]);
  }

  if(alphabet.size() == 26) {
    cout<< "true";
    return 0;
  }
  cout<<  "false";
  return 0;
}
