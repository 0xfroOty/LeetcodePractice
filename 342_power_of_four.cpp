#include <iostream>
using namespace std;

int main(){
  int n = 16;

  while(n > 3 && n % 4 == 0) {
    n /= 4;
  }
  
  if(n ==1 ){
    cout<<"true";
    return 0;
  }else{
    cout<<"false";
    return 0;
  }
}
