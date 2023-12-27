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

   int n ; cin >> n;
   int no;

   int ans = 0;
   for(int i= 0 ; i<n;i++){
     cin >> no;
     ans ^=no;
   }

   cout << ans;

 return 0;
}
