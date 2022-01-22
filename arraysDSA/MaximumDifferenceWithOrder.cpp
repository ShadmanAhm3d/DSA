#include <iostream>
using namespace std;
    
//NAIVE APPROACH #1
// int MaxDiff(int arr[], int n  ){
	
// 	int res= arr[1] - arr[0];
// 	for (int i = 0 ; i<n ; i++)
// 	for(int j = i+1 ; j < n ; j++)
// 	res = max(res,arr[j]-arr[i]);
// 	return res;
// }


//NAIVE APPROACH #2

// int maxDiff(int arr[], int arr_size)
// {    
//   int max_diff = arr[1] - arr[0];
//   for (int i = 0; i < arr_size; i++)
//   {
//     for (int j = i+1; j < arr_size; j++)
//     {    
//       if (arr[j] - arr[i] > max_diff)
//         max_diff = arr[j] - arr[i];
//     }
//   }        
//   return max_diff;
// }


// EFFICIENT APPROACH 

int MaxDiff(int arr[] , int n){

       int res  = arr[1] - arr[0] , minimimum_val = arr[0];

	   for(int j =1; j< n-1 ;j++ ){
			if(arr[j] - minimimum_val >  res){
		    res = max(res,arr[j]- minimimum_val);
	   }
		   minimimum_val = min(minimimum_val, arr[j]);
	   }
	   return res;
}

void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
}

int main() {
	int arr[] = {2,3,1,10,6,4,8,1};
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "Maximum difference between : " << MaxDiff(arr,n);

	return 0;
}
