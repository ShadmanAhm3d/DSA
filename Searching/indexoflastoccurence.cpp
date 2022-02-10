#include <iostream>
//#include<bits/stdc++.h>
using namespace std;

// int lastocc(int arr[], int n, int x, int low, int high){


//     if(low>high)
//     return -1;

//     int mid = (low + high) / 2;

//     if (arr[mid] > x)
//         return lastocc(arr, n, x, low, mid - 1);

//     if (arr[mid] < x)
//         return lastocc(arr, n, x, mid + 1, high);

//     if (arr[mid] == x && arr[mid] != arr[mid + 1]){
//         return mid;
//     }
//     else{
//         //recursive call for the half 
//         return lastocc(arr,n,x,mid+1,high);
//     }
// }



int lastocc(int arr[], int n , int x){

    int low = 0, high = n-1;
    while(low <= high){
        int mid = (low+high)/2;

        if(arr[mid] > x)
        high = mid -1;    
        else if(arr[mid] < x)
        low = mid +1;

        else{
        if(arr[mid] == x && arr[mid]!=arr[mid+1])
        return mid;
        else    
        return low = mid+1;
        }
    }
        return -1;


}




int main()
{

    int arr[] = {1, 10, 10, 10, 12,15,16,17,18,19,20, 20, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10;
    cout << lastocc(arr, n, x);

    return 0;
}