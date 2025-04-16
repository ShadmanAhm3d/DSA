#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node *left;
  Node *right;

  Node(int d) {
    data = d;
    left = NULL;
    right = NULL;
  }
};

Node *buildTree() {

  int data;
  cin >> data;
  if (data == -1) {
    return NULL;
  }

  // create a node [left,Data,right]
  Node *root = new Node(data);
  cout << "Enter left of" << data << endl;
  root->left = buildTree();

  cout << "Enter right of" << data << endl;
  root->right = buildTree();

  return root;
}

void inorder(Node *root) {
  if (root == NULL)
    return;

  inorder(root->left);
  cout << root->data << " ";
  inorder(root->right);
}



int main() {
  Node *start  = buildTree();

    cout << "Inorder Traversal: ";
    inorder(start);
    cout << endl;

}
