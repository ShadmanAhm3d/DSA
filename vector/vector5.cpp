#include <iostream>
#include <utility>
#include <vector>
using namespace std;

void print(vector<int>a){
  cout << "Current Size :" << a.size() << endl;
  cout << "Current Size :" << a.capacity() << endl;
  for (int i=0 ;i < a.size() ; i++ ){
    cout << a[i] << " " ;
  }
  cout << endl;
}


int main () {
 
  vector<int>vec(5) ;
  print(vec);
  vec.push_back(5);
  vec.push_back(4);
  print(vec);
  vec.push_back(6);
  vec.push_back(9);
  print(vec);
 

} 
