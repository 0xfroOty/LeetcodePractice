#include <iostream>
using namespace std;

int main() {
  int arr[] = {1,2,3,4,5};
  int n = 5;

  int sum =0;

  for(int i=0; i<n; i++) {
    bool unique = true;
    for(int j=0; j<n; j++) {
      if(i != j && arr[i] == arr[j]) {
        unique = false;
      }
    }
    if(unique) {
      sum = sum + arr[i];
    }
  }
  cout<<sum;
  return 0;
}
