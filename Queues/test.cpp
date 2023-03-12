
#include <iostream>
#include <queue>
#include <stack>

using namespace std;


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
  Print(Queue);
}
