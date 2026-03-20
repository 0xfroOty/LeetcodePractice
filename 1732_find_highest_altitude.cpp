#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int arr[] = {-4,-3,-2,-1,4,3,2};
  int n = 7;

  int alt = 0;
  int high_alt = 0;

  for(int i=0; i<n; i++) {
    alt = alt + arr[i];
    high_alt = max(high_alt, alt);
  }
  cout<<high_alt;
  return 0;
}
