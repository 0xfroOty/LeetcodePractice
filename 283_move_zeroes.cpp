#include <iostream>
using namespace std;

int main() {
  int arr[] = {0,0,1,0,4,7,0,3,8};
  int n =9;

  int j = 0;

  for(int i =0; i < n; i++) {
    if(arr[i] != 0) {
      swap(arr[j], arr[i]);
      j++;
    }
  }

  for(int i=0; i < n; i++) {
    cout<<arr[i]<<" ";
  }
  return 0;
}
