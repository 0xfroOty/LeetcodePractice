#include <iostream>
using namespace std;

int main() {
  int arr[] = {4,1,2,1,2};
  int n = 5;

  int answer = 0;

  for(int i =0; i < n; i++) {
    answer = answer ^ arr[i];
  }
  cout<<answer;
  return 0;
}
