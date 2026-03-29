#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  string ransomNote = "asdfghjkl";
  string magazine = "lkjhgfdsapoiuytr";

  sort(ransomNote.begin(), ransomNote.end());
  sort(magazine.begin(), magazine.end());

  int i = 0;
  int j = 0;

  while(i < ransomNote.size() && j < magazine.size()) {
    if(ransomNote[i] == magazine[j]) {
      i++;
      j++;
    }

    else if(ransomNote[i] != magazine[j]) {
      j++;
    }
  }

  if(i == ransomNote.size()) {
    cout<<"true";
    return 0;
  } else{
    cout<<"false";
    return 0;
  }
}
