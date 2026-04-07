#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> nums = {2,2,1,1,1,2,2};

  int majority =0;
  int count =0;

  for(int i=0; i<nums.size(); i++) {
    int num = nums[i];
    if(count == 0) {
      majority = num;
      count = 1;
    } else if(num == majority) {
      count++;
    } else {
      count--;
    }
  }

  cout<<majority;
  return 0;
}
