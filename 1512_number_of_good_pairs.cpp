#include <iostream>
using namespace std;

int main() {
  int arr[] = {1,2,3,1,1,3};
  int n = 6;

  int count = 0;

  for(int i = 0; i < n; i++) {
    for(int j = i + 1; j < n; j++){
      if(arr[i] == arr[j]){
        count++;
      }
    }
  }
  cout<<count<<" ";
  return 0;
}
