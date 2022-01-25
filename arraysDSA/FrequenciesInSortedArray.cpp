#include <iostream>
using namespace std;



void Frequncy (int arr[], int n){

    int freq = 1, i =1;
    while (i<n)
    {
        while(i<n && arr[i] == arr[i-1]){
            freq++;
            i++;
        }

         cout<<"Frequency of "<<arr[i - 1]<< " is: " << freq<<endl;
        i++;
        freq = 1;
    }

    if(n==1|| arr[n-1]!= arr[n-2])
       cout<<"Frequency of "<<arr[n- 1]<< " is: " <<1<<endl;


}

//DOING THE SAME THING BUT USING FOR LOOP ; ez TO UNDERSTAND 


//    void printFreq(vector<int> &arr, int N)
//     {
        
//         // Stores the frequency of an element
//         int freq = 1;
        
//        // Traverse the array arr[]
//         for (int i = 1; i < N; i++)
//         {
           
//             // If the current element is equal
//             // to the previous element
//             if (arr[i] == arr[i - 1])
//             {
               
//                 // Increment the freq by 1
//                 freq++;
//             }
           
//         // Otherwise,
//             else {
//                 cout<<"Frequency of "<<arr[i - 1]<< " is: " << freq<<endl;
//                 // Update freq
//                 freq = 1;
//             }
//         }
        
//         // Print the frequency of the last element
//        cout<<"Frequency of "<<arr[N - 1]<< " is: " << freq<<endl;
//        }




int main() {

    int arr[] =  {10,10,10,20,30,30,};
    int n = sizeof(arr)/sizeof(arr[0]);
    Frequncy(arr,n);
    return 0;
}