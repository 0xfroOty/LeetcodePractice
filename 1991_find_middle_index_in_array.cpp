#include <iostream>
using namespace std;

int main() {
  int arr[] = {2,3,-1,8,4};
  int n = 5;

  int totalsum = 0;
  for(int i=0; i<n; i++) {
    totalsum += arr[i];
  }

  int leftsum =0;
  for(int i=0; i<n; i++) {
    int rightsum = totalsum - leftsum - arr[i];
    if(rightsum == leftsum) {
      cout<<i;
      return 0;
    }
    leftsum += arr[i];
  }

  cout<< -1;
  return 0;
}
