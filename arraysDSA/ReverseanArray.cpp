#include <bits/stdc++.h>

using namespace std;


void rev(int arr[], int n ){

	int high  = n-1;
	int low = 0;

	while (low <= high){
		int temp = arr[low];
		arr[low] = arr[high];
		arr[high] = temp;
		low ++;
		high--;
	}

}




void printArray(int arr[], int size)
{
   for (int i = 0; i < size; i++)
   cout << arr[i] << " "<< endl;
 
   cout << endl;
}
 



int main(){

	int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]); 
	
	printArray(arr,n);

	rev(arr, n);

	cout << "Reversed array is " << endl;

	printArray(arr,n);

	return 0;

}
