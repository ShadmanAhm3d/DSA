#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define mod 1000000007
#define pb push_back
using namespace std;
using namespace __gnu_pbds;


template<typename T> using pbds =
tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;

int main(){

  //exploring left shift;
  int a ; cin >> a;
  int x = a << 3;
  cout << x;

  cout << "right" << endl;
  int b ; cin >>b;
  int y  = b >> 1;
  cout << y;

 return 0;
}
