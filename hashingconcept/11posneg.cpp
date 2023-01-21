#include <algorithm>
#include <iostream>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

vector<int> posneg(int arr[], int n) {

  vector<int> v,answer;
  map<int,int>mp;
 
  for(int i =0 ; i < n ; i++){

    if(arr[i] < 0){
      v.push_back(arr[i]);
    }else {
      mp[arr[i]]++;   //pos and count 
    }
  }
  sort(v.begin(),v.end());  //sort the neg

  for (int i= (int)v.end()-1 ; i >=0 ; i-- ){
     if(mp[abs(v[i])]){
      answer.push_back(v[i]);
    } 
  }
   
  
  return v;
}




int main() {
  int n;
  cin >> n;
  int arr[n];

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  vector<int> v = posneg(arr, n);
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " " << -v[i];
  }

  return 0;
}
