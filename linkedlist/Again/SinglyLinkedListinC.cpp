#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *next;
};

void insertAtEnd(struct Node **head, int value) {
  // create a node
  struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
  newNode->data = value;
  newNode->next = NULL;

  if (*head == NULL) {
    *head = newNode;
    printf("\n Element added successfully");
    return;
  }

  struct Node *temp = *head;
  while (temp->next != NULL) {
    temp = temp->next;
  }

  temp->next = newNode;
  printf("\n Element added successfully");
}

void traverse(struct Node *head) {
  struct Node *temp = head;
  while (temp != NULL) {
    printf("%d -> ", temp->data);
    temp = temp->next;
  }

  printf("\n List Traversed successfully");
  return;
}

int main() {
  struct Node *head = NULL;

  insertAtEnd(&head, 10);
  insertAtEnd(&head, 10);
  insertAtEnd(&head, 10);
  insertAtEnd(&head, 10);

  printf("\n");
  traverse(head);
}
