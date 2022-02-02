#include <iostream>
//#include<bits/stdc++.h>
using namespace std;

// int bsearch ( int arr[], int n  ){

//     for(int i=0;i< n;i++){
//         if(arr[i] == 7){
//           return  arr[i-1];
//         }

//     }
//     return 0;
// }

int bsearch(int arr[], int n, int x)
{

    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = (low + high )/2;

        if(arr[mid] == x)   
        return mid;
        else if(mid > x) 
        high  = mid -1;
        else  
        low = mid+1;
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 4, 5, 5, 6, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    int x;
    cin >> x;
    cout << bsearch(arr, n, x);
}