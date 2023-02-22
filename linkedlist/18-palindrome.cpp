#include <algorithm>
#include <ctime>
#include <iostream>
#include <ostream>
#include <stdexcept>
#include <unordered_map>
#include <unordered_set>
#include <utility>
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

int getlenght(Node* &head){
  int len= 0;
  Node *temp = head;
  while (temp != NULL) {
    len++;
    temp = temp->next;
  }
  return len;
}



bool palindrome(Node* &head){

	//check lenght 

	int lenght = getlenght(head);

	if(lenght == 0){
		return head;
	}
	cout << "len   " << lenght << endl;
	int ans = (lenght/2)+1;
	cout << "anse   " << ans << endl;
  int count = 0 ;
	Node*slow = head;
	Node*fast = head;

	while (count != ans) {
		count++;
		fast=fast->next;
		cout << "count " << count << endl;
	}
  //now fast is at the middle 
	
	while (fast->next!=NULL) {
      if(fast->data == slow->data){
				cout << "DATA IS SAME" << endl;
     		slow= slow->next;
		    fast= fast->next;
			}
			return false;
		
	}

	return true;
}








int main() {

  Node *node1 = new Node(1);
  Node *head = node1;
  Node *tail = node1;
  InseertAtend(2, tail);
  InseertAtend(3, tail);
  InseertAtend(1, tail);
  InseertAtend(2, tail);
  InseertAtend(3, tail);
 

  printall(head);
  
  cout << "NEw ll " << endl;

	if(palindrome(head)){
		cout << "PALINDROME";
	}else {
		cout << "NOT PALINDROMEJ";
	}
  printall(head);

  return 0;
}

