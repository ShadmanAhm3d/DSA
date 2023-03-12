#include <iostream>
#include <queue>
#include <stack>

using namespace std;

queue<int> reversequeue(queue<int> &Queue, int k) {

  queue<int> ans;
  stack<int> st;


  while (k--) {
    int elem = Queue.front();
    st.push(elem);
    Queue.pop();
  }

  while (!st.empty()) {
    int elem = st.top();
    ans.push(elem);
    st.pop();
  }

  while (!Queue.empty()) {
    int elem = Queue.front();
    ans.push(elem);
    Queue.pop();
  }

  return ans;
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
  reversequeue(Queue, 3);
  Print(Queue);
}
