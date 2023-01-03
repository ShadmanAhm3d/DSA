#include <iostream>

using namespace std;
// Move all zeros in an array to the end;

int Move(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            for (int j = i + 1; j < n; j++)
            
                if (arr[j]!= 0)
                    swap(arr[i], arr[j]);
            
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
    int arr[] = { 0, 1, 9, 8, 4, 0, 0, 2,
                         7, 0, 6, 0, 9 };
    int n = sizeof(arr) / sizeof(arr[0]);
  
    cout << "Original array: ";
    printArray(arr, n);
  
    Move(arr, n);
  
    cout << "\nModified array: ";
    printArray(arr, n);
  
    return 0;
}
