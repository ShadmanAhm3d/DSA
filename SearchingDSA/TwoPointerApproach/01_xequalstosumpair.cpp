//Given an unsorted array and x , find the pair of in the arrays sum eqaul to x? if any


#include<iostream>
//#include<bits/stdc++.h>
#include <algorithm>
using namespace std;

int twopointer(int arr[], int n , int x){ 
   int high = n-1, low = 0;
   while(low <= high){
	  if(arr[low]+arr[high] == x)
		 return 1;
	  else if(arr[low]+arr[high] < x)
		 low++;
	  else
		 high--;

   }
   return 0;
}

int main(){

      int arr[] = {5,10,20,15,7};
      int n = sizeof(arr)/sizeof(arr[0]);
      int x = 35;
     cout << (bool)twopointer(arr,n,x);
      return 0;
}
