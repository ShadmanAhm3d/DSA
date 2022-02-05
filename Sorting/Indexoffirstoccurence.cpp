#include <iostream>
//#include<bits/stdc++.h>
using namespace std;

// int firstocc(int arr[], int n, int x)
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == x)
//         {
//             return i;
//         }
//     }
//     return -1;
// }

//Recursive sol (big0(logn2))

// int firstocc(int arr[], int n , int low , int high, int x){

//     if(low > high)
//     return -1;

//     int mid = (low+high)/2;

//     if(x > arr[mid])
//     return firstocc(arr,n,mid+1,high,x);
//     else if(x < arr[mid])
//     return firstocc(arr,n,low,mid-1,x);

//     if(arr[mid] == x){
//         if(arr[mid]!=arr[mid-1])
//         return  mid;
//     }
//     return firstocc(arr,n,low,mid-1,x);
// }


int firstocc(int arr[], int n , int x){

   int low = 0 , high= n-1;

   while(low <= high){
       int mid  = (low+high)/2;
       if(arr[mid] > x)
       high= mid -1;
       else if(arr[mid] <  x)
       low = mid+1;


       else {
           if(arr[mid] == x && arr[mid]!=arr[mid-1])
           return mid;  
           else 
           high = mid -1;
       }
   }
    return -1;
     
}




int main()
{

    int arr[] = {1, 10, 10, 10, 20, 20, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 20; 
    cout << firstocc(arr, n,x);

    return 0;
}