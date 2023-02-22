 #include <iostream>

using namespace std;

class Node{

   public:
     int data;
     Node* prev;
     Node* next;
  

     //constructor;
  Node(int data) {

    this->data = data;
    this->next = NULL;
    this->prev = NULL;
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


void insertAtHead(int data , Node* &head,Node* &tail){
   if(head==NULL){
     Node* d = new Node(data);
     head = d;
     tail = d;
   }else {
     Node* d = new Node (data);
     d->next = head;
     head->prev = d;
     head = d;
    
   }
}


void insertAtTail(int data , Node* &tail,Node* &head){

  /* while (tail->next!=NULL) {
    tail++;
  }
  */
   if(tail==NULL){
     Node* d = new Node(data);
     tail = d;
     head = d;

   }else{
     Node* d = new Node (data);
     tail->next= d;
     d->prev = tail;
     tail=d;

   }


}

void insertatPOS(int pos , int data , Node* &head, Node * &tail){
  
  Node *d = new Node(data);
    Node* curr = head;
  // if 1 elem
  if (pos == 1) {
    insertAtHead(data, head,tail);
    return;
  }
  // if last elem
  if (curr->next == NULL) {
    insertAtTail(data, tail,head);
    return;
  }
int count  = 1;
  while ( count < pos -1){
    curr = curr->next;
    count++;
  }

   d->next = curr->next;
   curr->next->prev = d ;
   curr->next = d;
   d->prev = curr ;
}


void deletionpos(int pos,Node*&head,Node* &tail){
   
  if(pos==1)
  {
    Node* curr = head;
    curr -> next-> prev = NULL; 
     head -> next = head;
     curr -> next = NULL;
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

     curr->prev = NULL;
     prev->next = curr->next;
     curr -> next = NULL;
     delete curr;
  }


};



int main() {
 
/*   Node* foo = new Node(3); */
  Node *head = NULL;
  Node *tail = NULL;

   printall(head);



  insertAtHead(4, head,tail);
   printall(head);

  insertAtHead(5, head,tail);
   printall(head);

  insertAtHead(6, head,tail);
   printall(head);

   insertAtTail(7,tail,head);
   printall(head);

   insertAtTail(4447,tail,head);
   printall(head);

   insertatPOS(3, 333,head,tail) ;
   printall(head);

   deletionpos(3,head,tail);
   printall(head);
   cout <<"LENGHT :-> " <<  getlenght(head) << endl;
 return 0;
}
