#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
  string s = "()[]{}";
  int n = 6;

  stack<char> st;

  for(int i = 0; i < n; i++) {
    char c = s[i];

    if(c == '(' || c == '[' || c == '{') {
      st.push(c);
    } 
    else {

      if(st.empty()) {
        cout<<"false";
        return 0;
      }

      if(c == ')' && st.top() != '(') {
        cout<<"false";
        return 0;
      }

      if(c == ']' && st.top() != '[') {
        cout<<"false";
        return 0;
      }

      if(c == '}' && st.top() != '{') {
        cout<<"false";
        return 0;
      }

      st.pop();
    }
  }

  if(st.empty())
    cout<<"true";
  else
    cout<<"false";
}
