#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main() {
  vector<string> strs = {"flower","flow","flight"};

  sort(strs.begin(), strs.end());

  string front = strs[0];
  string end = strs[strs.size() -1];
  string result = "";

  for(int i=0; i< front.size(); i++){
    if(front[i] != end[i]){
      break;
    }
    result.push_back(front[i]);
  }
  cout<<result;
  return 0;
}
