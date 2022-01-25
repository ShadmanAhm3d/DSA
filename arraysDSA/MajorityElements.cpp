#include<iostream>
//#include<bits/stdc++.h>
using namespace std;



// Naive Approach 0(n2)time
//  int MajorityElement(int arr[] , int n){

//     for(int i=0;i<n ; i++){
//         int count = 1;
//         for(int j=i+1;j<n;j++)
//         if(arr[i] == arr[j])
//         count++;

//         if( count > n/2)
//         return i;   
//     }
//     return -1;
// }


// Efficient Solution:: 0(n) Time Complexity
//We are using Murays voting algorithm .
//The function is divided in 2 phases;
int  MajorityElement(int arr[] ,int n){

      int count = 1;
      int res =0;
      for(int i =1;i < n ; i++){
            if(arr[res] == arr[i])
            count++;
            else 
            count --;

            if(count == 0)
            res = i;
            count  =1;
      }

//Phase 2 : Checks how many times it occuring and is its count > n/2
      count = 0;
      for(int i =0 ; i < n ; i++)
            if(arr[res ] == arr[i])
            count ++;

            if(count <= n/2)
            res = -1;
      

      return res;

      
}


int main(){

      int arr[] = {1,2,3,2,3,2,3,2,3,2,3,3,3};
   	  int n = sizeof(arr) / sizeof(arr[0]);
     cout << "Index " << MajorityElement(arr,n) <<" Element appears Majority Times" << endl;
      return 0;
}