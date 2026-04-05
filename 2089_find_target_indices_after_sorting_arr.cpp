#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  vector<int> nums = {1,2,5,2,3};
  int target = 2;

  sort(nums.begin(), nums.end());

  vector<int> result;

  for(int i=0; i<nums.size(); i++) {
    if(nums[i] == target) {
      result.push_back(i);
    }
  }

  for(int i=0; i<result.size(); i++) {
    cout << result[i]<< " ";
  }
}
