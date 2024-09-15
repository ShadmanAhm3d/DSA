#include <bits/stdc++.h>
#include <cstdlib>

using namespace std;

class Node {
public:
  int data;
  Node *next;

  Node(int val) {
    this->data = val;
    this->next = NULL;
  }
};

class SinglyLinkedList {
private:
  Node *head;

public:
  SinglyLinkedList() { head = NULL; }

  void insertAtEnd(int value) {
    Node *newNode = new Node(value);

    if (head == NULL) {
      head = newNode;
    } else {
      Node *temp = head;
      while (temp->next != NULL) {
        temp = temp->next;
      }

      temp->next = newNode;
    }
  }

  void traversal() {
    if (head == NULL) {
      cout << "List is empty \n";
      return;
    }

    Node *temp = head;
    while (temp != nullptr) {
      cout << temp->data << "->";
      temp = temp->next;
    }
    cout << "NULL\n";
  }

  void deleteNode(int value) {
    if (head == nullptr) {
      return;
    }

    if (head->data == value) {
      Node *temp = head;
      head = head->next;
      temp->next = NULL;
      free(temp);
      return;
    }

    Node *temp = head;
    Node *prev = nullptr;

    while (temp != nullptr && temp->data != value) {
      prev = temp;
      temp = temp->next;
    }
    if (temp == nullptr) {
      cout << "Node with value " << value << " not found.\n";
      return;
    }

		prev->next = temp->next;
		delete temp;
  }
};

int main() {
  SinglyLinkedList list;
  cout << "How many element you want in the linked list \n";
  int n;
  cin >> n;
  while (n--) {
    int x;
    cout << "Enter Element : ";
    cin >> x;

    list.insertAtEnd(x);
  }

	list.traversal();

	list.deleteNode(5);


	list.traversal();

}
