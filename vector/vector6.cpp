#include <iostream>
#include <utility>
#include <vector>

using namespace std;


void print(vector<pair<int,int>>a){
  cout << "Current Size :" << a.size() << endl;
  cout << "Current Size :" << a.capacity() << endl;
  for (int i=0 ;i < a.size() ; i++ ){
    cout << a[i].first << " " << a[i].second << endl ;
  }
  cout << endl;
}

int main () {
 
  vector<pair<int,int>> vec;
  print(vec);
  int n ;
  cout << "enter n " ;
  cin >> n;


  cout << "enter  " << n*2 <<"   val " ;
  for (int i =0 ; i < n ; i++){
    int x,y ;
    cin >>  x >> y ;
    vec.push_back({x,y});
  }

  print(vec);


  return 0;
} 
