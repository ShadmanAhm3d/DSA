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

 /* Node* swapll(Node* &head,int n){
   Node* curr = head;
   Node* first = head;
   Node* second = head;

	 while (n--) {
		 first = first->next; // we set our first ppouinter
	 }
	 int count = 0;
	 while (curr!=NULL) {
	    count++ ;
			curr= curr->next;
	 }
	 int secondadd = count -n +1;
 
	  while (secondadd--) {
			second = second->next;
	  }
    swap(first->data,second->data);

		return head;
 } */

Node* swapll(Node* &head,int n){

   Node * fast = head;
   Node * fastdata = head;
   Node * slow = head;
   Node * slowdata = head;
  
	 while (--n) {
	fast =fast->next; 
         fastdata = fast;
	 }
	  
 while (fast->next!=NULL) {
	 fast = fast->next;
	 slow = slow->next;
 }

 swap(fastdata->data,slow->data);

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
  InseertAtend(6, tail);


   printall(head);
	swapll(head, 2);
   printall(head);


  return 0;
}
