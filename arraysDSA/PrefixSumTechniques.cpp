#include<iostream>
//#include<bits/stdc++.h>
using namespace std;

// Write a program which takes two indexes and and returns their sum ;
// **This function runs fine but it take extra spaces

// Approach 1;

// int FuncMain(int arr[], int n ,int leftInd, int rightInd){
//     int sum =0 ;
//     for(int i = leftInd; i<= rightInd; i++){
//         sum += arr[i];
//     }
//     return sum;
// } 


//Approach 2







int main(){

      int arr[] = {2,3,4,5,6,7};
      int n = sizeof(arr)/sizeof(arr[0]);

      cout << FuncMain(arr, n ,0,2);

      return 0;
}