#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define mod 1000000007
#define endl '\n'
#define ll long long
#define pb push_back
using namespace std;

void solve() {
  int n;
  cin >> n;

  for (int i = 0; i < n + 2; i++) {
    cout << "e";
  }
  cout << endl;

  int levels = (n / 2) + 1;
  for (int i = 0; i < levels; i++) {
    // spacing ?
    // total spaces
    // totalPOstiionAvailable- (i*2+1)
    //totalPOstiionAvailable => total stars at last level -> (levels * 2 -1) 
    //n+2 spaces ? because of e 
    int totalStars = (i*2)+1;
    int spaces = (n+2) - (i*2+1);
    for(int k= 0 ; k < spaces/2 ; k++){
      cout << "-";
    }


    // kitne stars per level ?
    for (int k = 0; k < (i * 2 + 1); k++) {
      cout << "*";
    }

    for(int k= 0 ; k < spaces/2-1 ; k++){
      cout << "-";
    }
    cout << endl;
  }
}

int main() {

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  solve();

  return 0;
}
