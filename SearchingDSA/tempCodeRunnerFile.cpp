#include<iostream>
//#include<bits/stdc++.h>
using namespace std;


int rotated(int arr[],int n,int x){
      int low = arr[0];
      int high  =arr[n-1];

      while(high >= low){
        int mid = (high+low)/2;

        if(arr[mid] == x)
        return mid;

        if(arr[low] < arr[mid]){
              if(x  >= arr[low] && x <= arr[mid] )
               high = mid -1;
               else
               low = mid+1;
        }else{
              if(arr[high] >= x && x >= arr[mid])
              low = mid+1;
              else 
              high = mid -1;
        }
      }
      return -1;
}


int main(){
            
      int arr[] = {100,200,500,1000,2000,10,20};
      int n = sizeof(arr) / sizeof(arr[0]);
      int x =  1000;
      cout << rotated(arr,n,x);
      return 0;
}