#include <iostream>
#include <utility>
#include <vector>
using namespace std;


void print(vector<int>a){
  for (int i=0 ;i < a.size() ; i++ ){
    cout << a[i] << " " ;
  }
}


int main () {
  vector<int>a;
  int n ; 
  cout << "enter the size of the vectors" << endl;
  cin >> n;
  cout << "enter the vals in the vectors" << endl;
  for  (int i =0 ; i < n ; i++){
    int x ; //create a temp variable 
    cin >> x;
    a.push_back(x);
  }
  cout << "Your  vals in the vectors are :" << endl;
  print(a);

return 0;
}
