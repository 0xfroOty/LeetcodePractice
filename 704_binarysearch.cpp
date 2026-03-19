#include <iostream>
using namespace std;

int main() {
  int arr[] = {1,2,3,4,5,6,7,8};
  int n = 8;
  int target = 7;

  int left =0;
  int right = n -1;

  while(left <= right) {
    int middle = (left + right) / 2;

    if(arr[middle] == target) {
      cout<<middle;
      return 0;
    } else if(arr[middle] < target) {
      left = middle + 1;
    } else {
      right = middle - 1;
    }
  }
  cout<<"-1";
  return 0;
}
