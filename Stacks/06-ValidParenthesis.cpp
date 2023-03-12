#include <bits/stdc++.h>

using namespace std;

bool valid(string s) {

  stack<char> st;
  for(auto x : s){
    if(st.empty()){
      st.push(x);
    }else if(st.top() == '(' && x == ')' || st.top() == '{' && x == '}' || st.top() == '[' && x == ']'){
      st.pop();
    }else{
      st.push(x);
    }
  }

  if (st.empty())
    return true ;
  else
    return false;
}

int main() {
  string s = "[]()]";
  valid(s);
  return 0;
}
