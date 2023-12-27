// Competitive Programming Setup
 #include <algorithm>
#include <bits/stdc++.h>
#include <deque>
#include <utility>
#include <vector>

using namespace std;

bool comp(pair<int,int> a, pair<int,int> b){
  if(a < b){
    return true;
  }else{
    return false;
  }
}
int main() {
 
  /* deque<int>deq = {-1,2,1,-2,4,6,8,-9};

  
  for(auto i : deq){
  cout << i << " ";
  }

  sort(deq.begin(),deq.end(),comp);

  cout << endl;
  for(auto i : deq){
  cout << i << " ";
  }

 return 0; */


  vector<pair<int,int>>vec={{1,3},{2,3}, {3,3} , {1,1} , {1,5}};

  for(auto [a , b] : vec){
    cout << "{ " << a  <<"," << b << " }" << " ";
  }

  sort(vec.begin(),vec.end(),comp);
  cout << endl;
  for(auto i : vec){
    cout << "{ " << i.first <<"," << i.second << " }" << " ";
  }


  
 return 0;

}
