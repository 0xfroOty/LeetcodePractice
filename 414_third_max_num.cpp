#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
  vector<int> nums = {2,2,3,1};

  long max = LONG_MIN;
  long second_max = LONG_MIN;
  long third_max = LONG_MIN;

  for(int i =0; i<nums.size(); i++) {
    int num = nums[i];

    if(num == max || num == second_max || num == third_max) {
      continue;
    }

    if(num > max) {
      third_max = second_max;
      second_max = max;
      max = num;
    } else if(num > second_max) {
      third_max = second_max;
      second_max = num;
    } else if(num > third_max) {
      third_max = num;
    }
  }

  if(third_max != LONG_MIN){
    cout<< third_max;
    return 0;
  } else {
    cout<< max;
    return 0;
  }
}
