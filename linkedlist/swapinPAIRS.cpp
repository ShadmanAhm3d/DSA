#include <algorithm>
#include <iostream>
#include <ostream>
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


  ~Node(){
    int value = this->data;
    if(this->next!= NULL){
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


/* Node* swp(Node* &head){

   if(head == NULL || head->next == NULL ) return head;


  Node * fast = head->next;
  Node * slow = head;


  while (fast!=NULL) {
    swap(fast->data,slow->data);
      fast =fast->next;
    if(fast!=NULL) fast = fast->next;


      slow = slow->next;
      slow = slow->next;
  
  }


return head;






} */



Node* swp(Node* &head){

   if(head == NULL || head->next == NULL ) return head;


  Node * fast = head;
  Node * slow = head;


  while (fast->next!=NULL ) {
      fast =fast->next;
    swap(fast->data,slow->data);


      slow = fast->next;
      fast = fast->next;
  
  }


return head;






}


int main() {

  Node *node1 = new Node(1);
  Node *head = node1;
  Node *tail = node1;
  InseertAtend(2, tail);
  InseertAtend(3, tail);
  InseertAtend(4, tail);
  InseertAtend(5, tail);
  InseertAtend(6, tail);
  InseertAtend(7, tail);
  InseertAtend(8, tail);
  InseertAtend(9, tail);
  InseertAtend(10, tail);
  InseertAtend(11, tail);
 

  printall(head);
  
  cout << "NEw ll " << endl;
  swp(head);
  printall(head);

  return 0;
}

