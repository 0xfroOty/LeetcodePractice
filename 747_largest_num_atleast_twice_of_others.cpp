#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int main() {
  vector<int> nums= {3,1,6,0};

  int largest = INT_MIN;
  int second_largest = INT_MIN;
  int index = 0;

  for(int i=0; i<nums.size(); i++) {
    if(nums[i] > largest) {
      second_largest = largest;
      largest = nums[i];
      index = i;
    } else if(nums[i] > second_largest) {
      second_largest = nums[i];
    }
  }

  if(largest >= 2 * second_largest){
    cout<<index;
    return 0;
  } else {
    cout<< -1;
    return 0;
  }
}
