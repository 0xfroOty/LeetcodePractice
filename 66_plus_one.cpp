#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> arr = {4,3,2,1};
  int n = 4;

  for(int i = n -1 ; i >=0; i--) {
    arr[i]++;
    
    if(arr[i] < 10) {
      for(int j = 0; j < n; j++){
        cout<<arr[j]<<" "; 
      }
      return 0;
    }

    arr[i] = 0;
  }
  arr.insert(arr.begin(), 1);
  
  for(int i =0; i < n; i++) {
    cout<< arr[i]<<" ";
  }
  return 0;
}
