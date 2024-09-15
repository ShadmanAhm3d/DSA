

#include <bits/stdc++.h>

using namespace std;
class Node {

public:
  int data;
  Node *next;

  Node(int value) {
    this->data = value;
    this->next = NULL;
  }
};

class Circular {
private:
  Node *head;

public:
  Circular() { head = nullptr; }




};

int main() {
  Circular ll;
  ll.insertAtend(12);
  ll.insertAtend(12);
  ll.insertAtend(12);
  ll.insertAtend(12);
  ll.insertAtend(12);

  ll.displayList();
}
