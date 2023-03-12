#include <iostream>

using namespace std;


class CircularQueue{
  
  int* arr;
  int size ;
  int front ;
  int rear;

  public:
  
  CircularQueue(){
    size = 100001;
    arr = new int(size);
    front=rear= 0;
  }

  bool enqueue(int value){
    //checking if the Q is full already or not
    if( (front==0 && rear == size -1) || (rear == (front-1)%(size-1)) ){
       cout << "Queue is Full";
       return false;

    }else if(front == -1){
      front=rear=0;
      arr[rear] = value;
    }else if( rear == size -1 && front!=0 ){
      rear  =0 ;
      arr[rear] = value;

    }else{
      rear++; 
      arr[rear] = value;
    }
    return true;
  }


  int dequeue(){
    if(front == -1) {
      return -1;
    }
    int ans = arr[front];
    arr[front] = -1;

    if(front == rear){
      front = rear = 0;
    }else if(front == size - 1 ){
      front = 0;
    }else{
      front++;
    }


    return ans;

  }

};





int main(){

}
