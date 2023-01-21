
#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
using namespace std;

/* bool keypair(int arr[], int n , int x){

  for (int i=0 ; i < n ; i++){
     for (int j=1 ; j < n ; j++){
      if(arr[i]+arr[j] ==x)
        return true;
    }
  }

return false;

}
*/

bool keypair(int arr[], int n, int x) {
  unordered_map<int, int> umap;
  for (int i = 0; i < n; i++)
    umap[arr[i]]++;

  for (auto itr = umap.begin(); itr != umap.end(); itr++) {
    int key = itr->first;
    int count = itr->second;
    int remainingval = x - key;

    if(remainingval==key){
      if(count>1)
        return true;
    }else{
      if(umap.find(key)!=umap.end())
        return true;
    }
  }

  return false;
}

int main() {
  int n;
  cout << "The value of n : " << endl;
  cin >> n;
  int x;
  cout << "enter the val of x" << endl;
  cin >> x;
  int arr[n];
  cout << "Enter the array1" << endl;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  if (keypair(arr, n, x)) {
    cout << "YES" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}
