#include<iostream>
#include<stack>


  
using namespace std;


int main(){
  stack<int>s;
  s.push(1);
  s.push(2);
  s.push(3);


  s.pop();

  cout << "TOP elem " << s.top() << endl;

  if(s.empty()){
    cout << "EMPTY HAI";
  }else{
    cout << "EMPTY nahi HAI";
  }
 
}
