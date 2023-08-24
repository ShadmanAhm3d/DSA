// Simple CPP program to find first non-
// repeating element.
#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
using namespace std;

//NOTE --> Naive sol
/*
int firstNonRepeating(int arr[], int n)
{
	// Loop for checking each element
	for (int i = 0; i < n; i++) {
		int j;
		// Checking if ith element is present in array
		for (j = 0; j < n; j++)
			if (i != j && arr[i] == arr[j])
				break;
		// if ith element is not present in array
		// except at ith index then return element
		if (j == n)
			return arr[i];
	}
	return -1;
} */



//NOTE --> Hashing Sol's

int firstNonRepeating(int arr[], int n){
 unordered_map<int, int>umap;

  for(int i =0 ; i  <n ; i++ ) //put the vals in umap
      umap[arr[i]]++; // means that we created int int type first int takes key and second iont tracks count and we are increasing the count by ++ on everyyinsertion of key
  
  for(int i =0 ; i  <n ; i++ ){ //traverse umap 
    int key = arr[i];
    auto temp = umap.find(key);
      if(temp->second == 1)
      return key; //so return basically mean break the loop and get out 
  }
    return 0;














	int arr[] = { 9, 4, 9, 6, 7, 4 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << firstNonRepeating(arr, n);
	return 0;
}

