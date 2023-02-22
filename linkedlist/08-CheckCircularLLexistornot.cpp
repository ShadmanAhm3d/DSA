// Competitive Programming Setup
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


bool Circular(Node*head){
    //empty list 
	if(head == NULL){
		return false;
	}
  
	Node* curr = head->next;
	while (curr!=NULL && curr!=head) {
		 curr = curr->next;
	}

	if(curr == head) return true;
 
	return false;

}



int main() {

  Node *node1 = new Node(11);
  /* cout << node1->data << endl;
  cout << node1->next << endl; */
  // appointing a head
  Node *head = node1;

  InsertAthead(13, head);
  InsertAthead(14, head);

  Node *tail = node1;
  InseertAtend(15, tail);
  InseertAtend(16, tail);
  InseertAtend(17, tail);

  InsertatPos(head, 3, 5, tail);
  printall(head);


	if(Circular(head)){
		cout << "LL is Circular";
	}else {
		cout << "LL is Not Circular";
	}



  return 0;
}
