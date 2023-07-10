

#include <cstddef>
#include <iostream>
#include <queue>
#include <stdio.h>

using namespace std;


//class
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


//tree building
void buildTreeusingBFS(TreeNode * &root) {

  queue<TreeNode *> q;
  cout << "Enter the root" << endl;
  int data;
  cin >> data;
  root = new TreeNode(data);
  q.push(root);


  int count = 0;
  while (!q.empty()) {
    TreeNode *temp = q.front();
    q.pop();

    cout << "Enter the left node for " << temp->data << endl;
    int leftdata;
    cin >> leftdata;

    if (leftdata  != -1) {
      temp->left = new TreeNode(leftdata);
      q.push(temp->left);
    }

    cout << "Enter the right node for " << temp->data << endl;
    int rightdata;
    cin >> rightdata;

    if (rightdata != -1) {
      temp->right = new TreeNode(rightdata);
      q.push(temp->right);
    }
  }
}




//traversal

void bfs(TreeNode *root) {

  queue<TreeNode *> q;
  q.push(root);
  q.push(NULL);


  int count =0 ;
  while (!q.empty()) {

    TreeNode *temp = q.front();
    q.pop();

    if (temp == NULL) {
      cout << endl;

      if (!q.empty()) {
        q.push(NULL);
      }
    } else {

      cout << temp->data << " ";
      
     //counting goes here
      if (temp->left ==NULL && temp->right ==NULL) {
        count++;
      
      }


      if (temp->left) {
        q.push(temp->left);
      }

      if (temp->right) {
        q.push(temp->right);
      }
    }
  }
  cout << "THE COUNT IS ::: " << count << endl;
}

int main() {


  //init  a root 
  TreeNode *root = NULL;
  //building tree usual

  buildTreeusingBFS(root);


  //traversal using bfs
  bfs(root);
  return 0;
}
