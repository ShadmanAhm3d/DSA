// Competitive Programming Setup
#include <bits/stdc++.h>
#include <future>

using namespace std;



class heapnaamHai{

public:
  int arr[100];
  int size = 0;

  heapnaamHai(){
    arr[0]  = -1;
    size = 0 ;
  }

  // ye max heap hai 
  void insert(int val){
    size++;
    int index= size; 
    arr[index] = val;

    while(index>1){
      int parent= index/2;

      if(arr[parent] < arr[index]){
        swap(arr[parent], arr[index]);
        index = parent;
      }else{
        return;
      }
    }
  }


  void print(){
    for(int i=1 ; i<=size ; i++){
      cout << arr[i] << " " ;
    }cout  << endl;
  }
};




int main() {
 
  heapnaamHai h ;
  h.insert(60);
  h.insert(50);
  h.insert(40);
  h.insert(30);
  h.insert(20);
  h.insert(55);
  h.insert(70);
  
  h.print();


 return 0;
}
