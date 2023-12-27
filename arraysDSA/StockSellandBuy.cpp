#include<iostream>
using namespace std;


int MaxProfit(int arr[] , int n){

    int profit = 0;

    for(int i=1; i< n ; i++ )
        if(arr[i] > arr[i-1])
        profit = profit+(arr[i] - arr[i-1]);
        // cout <<profit;
        
    
    return profit;
}


int main(){

    int arr[] = {7,1,5,3,6,4};
    int n = sizeof(arr) / sizeof(arr[0]);

   cout <<  MaxProfit(arr,n);
    return 0;
}
