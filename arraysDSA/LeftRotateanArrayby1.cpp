#include <iostream>


using namespace std;

void Rotate(int arr[], int n){


//This is test    //Left Rootate an array by 1

    int temp = arr[0];
    for(int i = 1 ; i< n; i++)
    {
        arr[i-1] = arr[i];
    }

        arr[n-1] = temp;

}

//To print the array
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
  
int main()
{
    int arr[] =  {1,2,3,4,5,6};
    int n = sizeof(arr) / sizeof(arr[0]);
  
    cout << "Original array: ";
    printArray(arr, n);
    Rotate(arr, n);
    cout << "Modified array" << endl;
    printArray(arr, n) ;
    return 0;
}
