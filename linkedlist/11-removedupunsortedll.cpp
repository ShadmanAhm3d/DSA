#include <algorithm>
#include <iostream>
#include <ostream>
#include <set>
#include <unordered_map>
#include <map>
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

Node* removell(Node* &head){
   if(head == NULL){
		 head = NULL;
	 }
   
	 Node* curr = head;

	 while (curr!=NULL && curr->next!=NULL ) {
		 if(curr->data == curr->next->data){
			 Node*temp = curr->next;
					curr->next = curr->next->next;
					delete(temp);
		 }else{
		 curr= curr->next;
		 } 
	 }
	 cout << endl;
	 return head;

}


Node* removeunsortedll(Node* &head){
	  unordered_set<int>s;
		Node* curr = head;
   if(curr == NULL){
		 return head;
	 }else{
		 s.insert(curr->data);
	 }

		while (curr!=NULL && curr->next!=NULL)
		{
			if(s.find(curr->next->data)!=s.end()){
				//data found
				curr->next = curr->next->next;
			}else{
				// data not found
        s.insert(curr->next->data);
				curr = curr->next;
			}
		}
	 return head;

}


Node * removeDuplicates( Node *head) 
    {
     	  unordered_set<int>s;
		Node* curr = head;
   if(curr == NULL)
		 return head;
		 else
		 s.insert(curr->data);

		while (curr!=NULL && curr->next!=NULL)
		{
			if(s.find(curr->next->data)!=s.end()){
				//data found
				curr->next = curr->next->next;
			}else{
				// data not found
        s.insert(curr->next->data);
				curr = curr->next;
			}
		}
	 return head;

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

  Node *node1 = new Node(1);
  /* cout << node1->data << endl;
  cout << node1->next << endl; */
  // appointing a head
  Node *head = node1;
  Node *tail = node1;
  InseertAtend(1, tail);
  InseertAtend(1, tail);
  InseertAtend(2, tail);
  InseertAtend(3, tail);
 

  printall(head);

  removeunsortedll(head);
   cout << "The Duplicate has been removed and new ll is "	 << endl;
  printall(head);


	if(Circular(head)){
		cout << "LL is Circular";
	}else {
		cout << "LL is Not Circular";
	}



  return 0;
}
