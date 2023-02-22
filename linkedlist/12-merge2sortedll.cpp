#include <algorithm>
#include <iostream>
#include <map>
#include <ostream>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

class Node {
public:
  int data;
  Node *next;
  // constructor
  Node(int data) {

    this->next = NULL;
    this->data = data;
  }

  ~Node() {
    int value = this->data;
    if (this->next != NULL) {
      delete next;
      this->next = NULL;
    }
    cout << "The deleted data is " << value << endl;
  }
};

void InsertAthead(int data, Node *&head) {
  Node *node2 = new Node(data);
  node2->next = head;
  head = node2;
}

void InseertAtend(int data, Node *&tail) {
  Node *node3 = new Node(data);
  tail->next = node3;
  tail = tail->next;
}

void InsertatPos(Node *&head, int data, int pos, Node *&tail) {

  Node *node4 = new Node(data);

  Node *temp = head;

  // if 1 elem
  if (pos == 1) {
    InsertAthead(data, head);
    return;
  }
  // if last elem
  if (temp->next == NULL) {
    InseertAtend(data, tail);
    return;
  }

  int count = 1;
  while (count < pos - 1) {
    temp = temp->next;
    count++;
  }

  node4->next = temp->next;
  temp->next = node4;
}

void printall(Node *&head) {
  Node *temp = head;
  while (temp != NULL) {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

Node *MergeLL(Node *&head, Node *&head2) {

  Node *l3 = new Node(0);
  Node *curr = l3;

  while (head != NULL && head2 != NULL) {
    if (head->data <= head2->data) {
      curr->next = head;
      head = head->next;
    } else {
      curr->next = head2;
      head2 = head2->next;
    }
    curr = curr->next;
  }
  if (head != NULL)
    curr->next = head;
  if (head2 != NULL)
    curr->next = head2;
 

  return l3->next;
  printall(l3);
}

int main() {

  Node *node1 = new Node(1);
  Node *node2 = new Node(1);
  Node *head = node1;
  Node *tail = node1;
  Node *head2 = node2;
  Node *tail2 = node2;
  // l1
  InseertAtend(2, tail);
  InseertAtend(4, tail);

  // l2
  InseertAtend(1, tail2);
  InseertAtend(2, tail2);
  InseertAtend(3, tail2);
  InseertAtend(4, tail2);
  InseertAtend(4, tail2);

  cout << "L1 " << endl;
  printall(head);
  cout << "L2 " << endl;
  printall(head2);

  cout << "Merged list " << endl;
  MergeLL(head, head2);
  printall(head);

  return 0;
}
