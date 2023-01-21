// Simple CPP program to find first non-
// repeating element.
#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
using namespace std;




//NOTE --> Hashing Sol's

int firstRepeating(int arr[], int n){
 unordered_map<int, int>umap;

  for(int i =0 ; i  <n ; i++ ) //put the vals in umap
      umap[arr[i]]++; // means that we created int int type first int takes key and second iont tracks count and we are increasing the count by ++ on everyyinsertion of key
  
  for(int i =0 ; i  <n ; i++ ){ //traverse umap 
    int key = arr[i];
    auto temp = umap.find(key);
      if(temp->second > 1)
      return i+1; //so return basically mean break the loop and get out 
  }
    return 0;

}









// Driver code
int main()
{
	// int arr[] = { 1,5,3,4,2,5,6 };
	// int n = sizeof(arr) / sizeof(arr[0]);
   int n ;
  cout << "The value of n : " << endl;
 cin >> n;
  
  int arr[n];
  cout << "Enter the array" << endl;
  for (int i=0; i<n; i++) {
    cin >> arr[i]; 
  }


  cout << "The fisrt non repeatng elem is " << endl;
	cout << firstRepeating(arr, n);
	return 0;
}

