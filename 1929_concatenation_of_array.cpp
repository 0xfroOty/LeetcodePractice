#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> arr = {1,2,3,4,5};
  int n = 5;

  int original = n;

  for(int i=0; i < original; i++) {
    arr.push_back(arr[i]);
  }
  
  for(int i=0; i < arr.size(); i++) {
    cout<<arr[i]<<" ";
  }
  return 0;
}
