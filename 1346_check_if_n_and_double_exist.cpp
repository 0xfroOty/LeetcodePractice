#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
  int arr[] = {10,2,5,3};
  int n = 4;

  unordered_set<int>  exist;

  for(int i=0; i<n; i++) {
    if(exist.count(arr[i] * 2) || (arr[i] % 2 == 0 && exist.count(arr[i] / 2))) {
      cout<<"true";
      return 0;
    } 
    exist.insert(arr[i]);
  }
  cout<<"false";
  return 0;
}
