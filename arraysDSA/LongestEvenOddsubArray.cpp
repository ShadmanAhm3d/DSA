#include <iostream>
//#include<bits/stdc++.h>
using namespace std;


// Naive Solution :: Big0(n2)
// int LongestEvenOdd(int arr[], int n)
// {
//     int res = 0;
//     for (int i = 0; i < n; i++)
//     {
//         int currres = 1;
//         for(int j=i+1;i<n;j++){
//             if((arr[j]%2==0 && arr[j-1]%2 != 0) || (arr[j]%2 !=0 && arr[j-1]%2 ==0))
//             currres++;
//             else
//             break;
//         }
//         res = max(res,currres);
//     }
//     return res;
// }


//Efficient Sol :: Big0(n)

int LongestEvenOdd(int arr[],int n ){
    int res =0;
    int curres =1;
    for(int i =1;i<n; i++){
        if((arr[i]%2==0 && arr[i-1]%2 != 0) || (arr[i]%2 !=0 && arr[i-1]%2 ==0)){
            
        curres++;
        res = max(res,curres);
    }else 
      curres  = 1;

    }
    return res;
}



int main()
{

    int arr[] = {5,10,20,6,3,8};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << LongestEvenOdd(arr, n);

    return 0;
}
