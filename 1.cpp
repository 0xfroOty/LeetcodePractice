#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
  vector<int> nums = {2, 4, 5, 7};
  int target = 12;

  for(int i=0; i < nums.size(); i++){
    int comp = target - nums[i];

    for(int j=i+1; j < nums.size(); j++) {
      if(nums[j] == comp);
      cout<<i<<" "<< j;
      return 0;
    }
  } 
  return 0;
}
