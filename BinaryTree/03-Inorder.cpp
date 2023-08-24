
#include <cstddef>
#include <iostream>
#include <stdio.h>
#include <queue>

using namespace std;

class TreeNode {
public:
  int data;
  TreeNode *left;
  TreeNode *right;

  TreeNode(int data) {
    this->data = data;
    this->left = NULL;
    this->right = NULL;
  }
};

TreeNode *buildTree(TreeNode *root) {
  // recursion based tree structurting why ??? no idea bro

  cout << "Enter the data" << endl;
  int data;
  cin >> data;

  root = new TreeNode(data);

  if (data == -1)
    return NULL;

  cout << "Enter the data on the left of " << data << endl;
  root->left = buildTree(root->left);
  cout << "Enter the data on the right of " << data << endl;
  root->right = buildTree(root->right);
  return root;
}

void inorder(TreeNode* root){

  //we use recursion here

  //base case
  if(root == NULL){
    return;
  }


  inorder(root->left);
  cout << root->data << " ";
  inorder(root->right);

}




int main() {

   
  TreeNode *root = NULL;

  root = buildTree(root);
  
  inorder(root);


  return 0;
}
