#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
  vector<int>arr1 = {4,9,5};
  vector<int>arr2 = {9,4,9,8,4};

  set<int>  set2(arr2.begin(), arr2.end());
  set<int>  result;

  for(int i = 0; i < arr1.size(); i++) {
    int num = arr1[i];

    if(set2.count(num)) {
      result.insert(num);
    }
  }
  vector<int>  ans(result.begin(), result.end());
  
  for(int i = 0; i <ans.size(); i++) {
    cout<<ans[i]<<" ";
  }
  return 0;
}
