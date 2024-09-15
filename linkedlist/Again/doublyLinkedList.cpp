
#include<bits/stdc++.h>


using namespace std;
class Node {

public:
  int data;
  Node *prev;
  Node *next;

  Node(int value) {
    this->data = value;
    this->prev = NULL;
    this->next = NULL;
  }
};

class Circular {
private:
  Node *head;

public:
  Circular() { head = nullptr; }

  void insertAtend(int val) {
    Node *newNode = new Node(val);

    if (head == nullptr) {
      head = newNode;
      return;
    }

    Node *temp = head;
    while (temp->next != nullptr) {
      temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;
  }

   void displayList() {
        if (head == nullptr) {
            cout << "List is empty!" << endl;
            return;
        }

        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;  // Indicate the end of the list
    }
};

int main(){
  Circular ll ;
  ll.insertAtend(12);
  ll.insertAtend(12);
  ll.insertAtend(12);
  ll.insertAtend(12);
  ll.insertAtend(12);


  ll.displayList();
}
