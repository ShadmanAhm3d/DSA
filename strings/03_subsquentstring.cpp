#include <bits/stdc++.h>


using namespace std;

bool sub ( string A ,string B){
  int n  = A.length();
  int m  = B.length();
  int j = 0 ;
   if( n < m)
    return 0;
  for(int i=0 ; i< n && j < m ; i++){
    if(A[i]==B[j])
      j++;
  }
  return (j!=m);
}



int main(){
  string A= "ABCD";
  string B = "AD";

  cout << sub(A,B);
}
