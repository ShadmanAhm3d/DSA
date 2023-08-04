#include <iostream>
#include <ostream>


using namespace std;

class QueueBhai{

     int* arr;
     int front;
     int rear; 
     int size;

  public:

   QueueBhai(){
     size = 100001;
     arr = new int(size);
     front = 0;
     rear =0 ;
     
   }


   void enqueue(int data){
     if (rear == size) {
       cout << "Queue is FULL" << endl;
     }
     arr[rear] = data;
     rear++; 
   }
 
   int dequeue(){
     if(front == rear){
       cout << "Nothing to pop " << endl ;
     }else{
       int ans = arr[front];
       arr[front] = -1;
       front++;

       if (front == rear) {

         front =0 ;
         rear =0 ;
       }

       return ans;
     }

     return 0;
   }


   bool isEmpty(){
     if(front == rear){
       return true;
     }else{
       return false;
     }
   }
 
   int qfront (){
     if(front ==  rear){
       return -1;
     }else{
       return arr[front];
     }
   }

};

int main(){
  QueueBhai st;
  st.enqueue(1);
  st.enqueue(2);
  st.enqueue(3);

  cout << " THE val " << st.qfront()  <<endl;
  st.dequeue();
  cout << " THE val " << st.qfront()  <<endl;
  cout << " THE arrray is empty/notempty " << st.qfront()  <<endl;

  return 0;

}

