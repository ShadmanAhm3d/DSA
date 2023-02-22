#include <iostream>


using namespace std;

class Node {
  public:
    int data;
    Node *next;

  Node(int data) {

    this->next = NULL;
    this->data = data;
  }
//basically a deletion destructor 
  //memeory free code
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


void deletionpos(int pos,Node*&head){
   
  if(pos==1)
  {
    Node* curr = head;
   
     head->next = head;
     curr->next = NULL;
     //deletion of the node 
     delete curr;
  }
  else {
    int count =1;
       Node* curr  = head ;
       Node* prev = NULL;
     while(count < pos){

       prev = curr;
       curr = curr->next;
       count++;
     }

     prev->next = curr->next;
     curr->next = NULL;
     delete curr;
  }


};





int main(){
  Node* foo = new Node(5);

  Node *head = foo;

  InsertAthead(13, head);
  InsertAthead(14, head);

  Node *tail = foo;
  InseertAtend(15, tail);
  InseertAtend(16, tail);
  InseertAtend(17, tail);

  InsertatPos(head, 3, 5, tail);
  
  deletionpos(5,head);
  printall(head);

 return 0;

}
