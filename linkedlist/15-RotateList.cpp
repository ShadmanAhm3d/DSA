#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <iterator>
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

/* Node* RotateLL(Node* &head,int k){

         Node* curr = head;
         Node* startingPoint = head;
         Node* endingPoint = head;
         Node*pow = head; //can show error

         while (k--) {
                 curr = curr->next;
         }
         while (endingPoint->next!=NULL) {
                 endingPoint = endingPoint->next;
         }
         pow = curr->next;
         endingPoint->next = head;
         curr->next = NULL;
        return pow;
}

*/

 int lenght(Node* head)
  {
      Node* ptr= head;
      int count=0;
      while(ptr!=NULL)
      {
          count++;
                  ptr=ptr->next;
      }
      return count;
  }

    Node* rotateRight(Node* head, int k) {
        if(head == NULL||head->next == NULL) return head;
        int v= lenght(head);
        k=k%v;
        
    for(int i=0;i<k;i++) {
        Node* temp = head;
        while(temp->next->next != NULL) temp = temp->next;
        Node* end = temp->next;
        temp->next = NULL;
        end->next = head;
        head = end;
    }
    return head;
    }


int main() {

  Node *node1 = new Node(1);
  Node *head = node1;
  Node *tail = node1;
  // l1
  InseertAtend(2, tail);
  InseertAtend(3, tail);
  InseertAtend(4, tail);
  InseertAtend(5, tail);

  cout << "THE ORIGINAL LL" << endl;
  printall(head);
  rotateRight(head, 2);
  printall(head);

  return 0;
}
