#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> nums = {2,0,2,1,1,0};

  int low = 0;
  int high = nums.size() -1;
  int mid = 0;

  while(mid <= high) {
    if(nums[mid] == 0) {
      swap(nums[mid], nums[low]);
      low++;
      mid++;
    }
    else if(nums[mid] == 1) {
      mid++;
    }
    else if(nums[mid] == 2) {
      swap(nums[mid], nums[high]);
      high--;
    }
  }

  for(int i=0; i<nums.size(); i++) {
    cout<<nums[i]<<" ";
  }
  return 0;
}
