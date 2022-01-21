#include <bits/stdc++.h>

using namespace std;


 void Move(int arr[], int n){

//Efficient way to move zeroes to end in constant time and O(1)

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if(arr[i]!= 0)   {
            swap(arr[i],arr[count]);
            count++;
        }
    }


}
//To print the array
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
  
int main()
{
    int arr[] = { 1,2,3,0,4,0,6,0,6,0,4,0 };
    int n = sizeof(arr) / sizeof(arr[0]);
  
    cout << "Original array: ";
    printArray(arr, n);
  
    Move(arr, n);
  
    cout << "\nModified array: ";
    printArray(arr, n);
  
    return 0;
}