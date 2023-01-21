//#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int Peakelem (int arr[], int n,int low, int high){
   

    while(low<=high){
        int mid = (low+high) /2;
        
        if((mid == 0 || arr[mid -1] <= arr[mid] ) && (mid == n-1 || arr[mid+1] <= arr[mid]))
        return mid;

        if(mid > 0 && arr[mid] < arr[mid+1])
        return Peakelem(arr,n,low,mid-1);
        else
        return Peakelem(arr,n,mid+1,high);
    }
    return -1;
}


int findpeak(int arr[], int n){
    return Peakelem(arr, n,0,n-1);
}


int main(){

      int arr[] = {5,10,20,15,7};
      int n = sizeof(arr)/sizeof(arr[0]);
    //    int high = n-1 , low = arr[0];
     // int result = Peakelem(arr, n,low,high);
    int result = findpeak(arr,n);
      if(result == -1)
      cout << "Elememnt not found";
      else
      cout << "elelment " << result <<endl;

      return 0;
}