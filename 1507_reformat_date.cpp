#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  string date = "20th Oct 2052";

  vector<string> blocks;
  string temp = "";

  for(int i=0; i<date.size(); i++) {
    char c = date[i];
    if(c == ' '){
      blocks.push_back(temp);
      temp = "";
    } else {
      temp += c;
    }
  }
  blocks.push_back(temp);

  string day = blocks[0];
  string month = blocks[1];
  string year = blocks[2];

  day = day.substr(0, day.size() - 2);
  if(day.size() == 1) {
    day = "0" + day;
  }

  vector<string> months = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

  int monthstr;
  for(int i=0; i< 12; i++) {
    if(months[i] == month) {
      monthstr = i + 1;
      break;
    }
  }

  string monthnumstr = to_string(monthstr);
  if(monthnumstr.size() == 1) {
    monthnumstr = "0" + monthnumstr;
  }

  cout<<  year + "-" + monthnumstr + "-" + day;
  return 0;
}
