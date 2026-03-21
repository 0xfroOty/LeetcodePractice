#include <iostream>
using namespace std;

int main() {
  int arr[] = {1,7,3,6,5,6};
  int n = 6;

  int totalsum =0;
  
  for(int i=0; i<n; i++) {
    totalsum = totalsum + arr[i];
  }

  int leftsum = 0;

  for(int i=0; i<n; i++) {
    int rightsum = totalsum - leftsum - arr[i];
    if(rightsum == leftsum) {
      cout<<i;
      return 0;
    }
    leftsum = leftsum + arr[i];
  }

  cout<< -1;
  return 0;
}
