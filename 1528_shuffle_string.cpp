#include <iostream>
#include <string>
using namespace std;

int main() {
  string s = "codeleet";
  int indices[] = {4,5,6,7,0,2,1,3};

  string answer = s;

  for(int i=0; i<s.size(); i++) {
    int correctpos = indices[i];
    answer[correctpos] = s[i];
  }

  cout<<answer;
  return 0;
}
