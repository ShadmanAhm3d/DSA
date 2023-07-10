#include <bits/stdc++.h>

using namespace std;

 int Maxdif(int arr[] , int arr_size ){


   int res = arr[1] - arr[0];
   int minval = arr[0];

   for (int i = 0; i < arr_size -1 ; i++) {
     res = ( res, arr[i] - minval);
     minval  = (minval , arr[i]);
    
   }
   return res;

 }


 








void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++)
    cout << arr[i] << " ";

  cout << endl;
}

int main() {
  cout << "Enter n " << endl ;
  int n;
  cin >> n;
  int arr[n];

  cout << "enter the array " << endl ;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  // int x = 5;

cout << Maxdif(arr, n);

   
  return 0;
}
