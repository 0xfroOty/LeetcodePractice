#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int arr[] = {1,2,3,1};
  int n = 4;

  sort(arr, arr +n);
  for(int i=0; i< n-1; i++) {
    if(arr[i] == arr[i+1]){
      cout<<"true";
      return 0;
    }
  }
  cout<<"false";
  return 0;
}
