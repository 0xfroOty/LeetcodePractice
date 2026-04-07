#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
  vector<int> nums = {0,3,7,2,5,8,4,6,0,1};

  unordered_set<int> s(nums.begin(), nums.end());
  int maxcount =0;

  for(int num : s) {
    if(s.count(num - 1) == 0) {
      int curr = num;
      int count = 1;

      while(s.count(curr + 1)) {
        curr++;
        count++;
      }

      if(count > maxcount) {
        maxcount = count;
      }
    }
  }

  cout<<maxcount;
  return 0;
}
