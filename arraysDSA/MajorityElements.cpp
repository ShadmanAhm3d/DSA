#include <bits/stdc++.h>
#include <map>
using namespace std;

int solve(int arr[], int n) {
       
     int cnt  = 0;

     int elem;

     for ( int i =0 ; i  < n ; i++){ 
         if( cnt ==0){
             elem = arr[i];
             cnt = 1;
         }else if(arr[i] == elem){
             cnt++;
         }else{
             cnt--;
         }

     }
     int secondcounter =0;
     for(int i=0; i<n;i++){
        if(arr[i] == elem)  secondcounter++;
     }

     if(secondcounter  > n/2 )
         return elem;
         


     return -1;
}

void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++)
    cout << arr[i] << " ";
  cout << endl;
}

int main() {
  int arr[] = {15,1,1,1,1,1,1,3,4,4,5};
  int n = sizeof(arr) / sizeof(arr[0]);
  cout << "Number of Element Processed in the array " << n << endl;
  cout << solve(arr, n) << endl;
  return 0;
}

