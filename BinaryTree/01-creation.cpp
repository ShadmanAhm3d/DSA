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


void bfs(TreeNode* root){

   queue<TreeNode *>q;
   q.push(root);
   q.push(NULL);

   while (!q.empty()) {
     
     TreeNode* temp = q.front();
     q.pop();

     if(temp == NULL){
       cout << endl;

       if(!q.empty()){
         q.push(NULL);
       }
     }else{

     cout << temp->data << " ";

     if (temp->left) {
        q.push( temp->left); 
     }
   
     if (temp->right) {
        q.push( temp->right); 
     }
   }
     }



  
}




int main() {

   
  TreeNode *root = NULL;

  root = buildTree(root);
  
  bfs(root);


  return 0;
}
