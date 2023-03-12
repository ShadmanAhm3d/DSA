#include <iostream>
#include <stack>

using namespace std;

string removedup(string s) {

  stack<char> st;

  int i = 0;

  while (i < s.length()) {
    if (st.empty() || s[i] != st.top()) {
      st.push(s[i]);
      i++;
    } else {
      st.pop();
      i++;
    }
  }

    string returning_String = "";
    while (!st.empty()) {
      returning_String = st.top() + returning_String;
      st.pop();
    }
    return (returning_String);
  }

int main() {
  string s = "azxxzy";

  cout <<  removedup(s);

  return 0;
}
