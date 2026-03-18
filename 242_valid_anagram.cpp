#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  vector<char>s1 = {'h','e','l','l','o'};
  vector<char>s2 = {'e','h','o','l','l'};

  sort(s1.begin(), s1.end());
  sort(s2.begin(), s2.end());

  if(s1 != s2) {
    cout<<"false";
  } else {
    cout<<"true";
    return 0;
  }
}
