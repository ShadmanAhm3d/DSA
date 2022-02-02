#include<iostream>
//#include<bits/stdc++.h>
using namespace std;





int Cons(int arr[], int n){

    int count= 0;
    //int res = 0;
    for(int i =0 ; i< n ; i++){
        if(arr[i] ==1 && arr[i+1] == 1){

            count = count + 1;
//            res = res + count
        }
    }

   return count ;

}


int main(){

      int arr[] = {0,1,1,1,1,1,1,1,0,1,1,0};
      int n = sizeof(arr) / sizeof(arr[0]);
      cout << Cons(arr, n );

      return 0;
}
