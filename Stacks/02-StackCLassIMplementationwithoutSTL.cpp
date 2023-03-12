#include <iostream>
#include <stack>
using namespace std;



class Stack{


 // properties 

   public:
     int *arr ;
     int size;
     int top;

  //contructor

     Stack(int size){
         this->size = size;
         arr = new int(size);
         top = -1;
     }


  //function or behaviours
  void push(int element){
       if(size - top > 1){
           top++;
           arr[top] = element;
       }else{
        cout << "Stack OVERFLOW" << endl;
       }
  }

 

  void pop() {
        if (top >= 0) {
            top--; 
        }else{
          cout << "Stack UNDERFLOW" << endl;
        }
  }
 
  int peek() {
    if(top >= 0){
      return arr[top];
    }else{
      cout << "Stack IS empty" << endl;
      return -1;
    }
  }


  bool isEmpty(){
    if(top == -1){
      return true;
    }else{
      return false;
    }
  }


void getmin(){
    auto lowest = 0;
    int i =0;
    while (i < size ) {
       if(arr[i] < lowest){
         arr[i] = lowest;
         i++;
       }else{
         i++;
       }
    }
    cout << "Lowest :" << lowest;
}

};













int main(){
 //declaration and declaration of size 
  Stack st(5);

  st.push(1);
  st.push(2);
  st.push(3);
  st.push(4);

  
  st.pop();
  cout<< "TOP ELEMENT " << st.peek() << endl;

  st.pop();
  cout<< "TOP ELEMENT " << st.peek() << endl;

  st.pop();
  cout<< "TOP ELEMENT " << st.peek() << endl;

  st.pop();
  cout<< "TOP ELEMENT " << st.peek() << endl;



  if(st.isEmpty())
    cout << "STACK sahi mein empty hai bhai" << endl;
  else
    cout << "STACK  empty nahi hai bhai" << endl;

   st.getmin();


  return 0;
}

