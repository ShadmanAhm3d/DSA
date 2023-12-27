#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define mod 1000000007
#define endl "\n"
#define pb push_back
using namespace std;
using namespace __gnu_pbds;


template<typename T> using pbds =
tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;

bool getoddity(int n){
  return(n & 1);
}

int getIthBit(int n,int i){
  int mask  = (1 << i);
  int bit = (n & mask) > 0 ? 1 : 0;
  return bit;
}

int setBit(int n , int i){
  int mask  = (1 << i);
  int ans = ( n | mask);
  return ans;

}

int clearBit(int n , int i){
  int mask  = (1 << i);
  int ans = ( n^mask);
  return ans;

}


int updatebit(int n , int i , int v){
  int returnedBit= clearBit(n,i);
  int mask = (v<<i);
  int ans  = (returnedBit | mask);
  return ans;
  

}
int main(){

  int n  =13;
  int i =2;
  if(getoddity(n)){
    cout << "Number is true " << endl;
  }else{
    cout << "Number is false" << endl;
  }

  cout << "get BIT  "<<getIthBit(n,i) << endl;
  cout << "SET BIT  " << setBit(n,i) << endl;
  cout << "CLEAR BIT  " << clearBit(n,2) << endl;
  cout << "UPDATED BIT  " << updatebit(n,2,0) << endl;

 return 0;
}
