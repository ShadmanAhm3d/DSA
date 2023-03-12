#include <iostream>
#include <queue>
#include <stack>

using namespace std;

queue<int> reversequeue(queue<int> &Queue) {
  
  stack<int>s;

  while (!Queue.empty()) {
      int elem = Queue.front();
      Queue.pop();
      s.push(elem);
  
  }

  while (!s.empty()) {
      int elem = s.top();
      s.pop();
      Queue.push(elem);
  
  }

 return Queue; 
}

// Utility function to print the queue
void Print(queue<int> &Queue) {
  while (!Queue.empty()) {
    cout << Queue.front() << " ";
    Queue.pop();
  }
}
// Driver code
int main() {
  queue<int> Queue;
  Queue.push(10);
  Queue.push(20);
  Queue.push(30);
  Queue.push(40);
  Queue.push(50);
  Queue.push(60);
  Queue.push(70);
  Queue.push(80);
  Queue.push(90);
  Queue.push(100);
  reversequeue(Queue);
  Print(Queue);
}
