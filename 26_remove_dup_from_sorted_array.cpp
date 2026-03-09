#include <iostream>
using namespace std;

int main() {
  int arr[] = {1,2,2,3,3,4};
  int n = 6;

  int i = 0;
  for(int j = 1; j < n; j++) {
    if(arr[j] != arr[i]) {
      i++;
      arr[i] = arr[j];
    }
  }
  cout<<i + 1;
  return 0;
}
