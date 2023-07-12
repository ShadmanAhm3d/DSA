//#include <iostream>
#include<bits/stdc++.h>
using namespace std;



//A program which takes a array of itegers and a value k and prints out the total maximum value of consective ks




 int maxfunc(int arr[], int n , int k){
     int maxvalue = INT_MIN;
     for(int i=0; i < n-k +1 ; i++){
         int currmax  = 0;
         for(int j =i;j<i+k ;j++){
             currmax = currmax + arr[j];

         }
             maxvalue = max(maxvalue, currmax);

     }
     return maxvalue;
 }






int main()

{

    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << maxfunc(arr, n , 2);
    return 0;
}
