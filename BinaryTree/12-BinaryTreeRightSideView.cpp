

#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>

using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

vector<int> rightview(TreeNode* root) {
  queue<TreeNode*> q;
  q.push(root);
  vector<int>answer;

  while(1){
      int size = q.size();
      if(size == 0){
          return answer;
      }

      // vector<int>data  ;
      int data =0;
      while(size > 0){
          TreeNode*temp  = q.front();
          data = temp->val;
          q.pop();

          if(temp->left!=NULL){
              q.push(temp->left);
          }
          if(temp->right!=NULL){
              q.push(temp->right);
          }

          size--;
      }
      answer.push_back(data);
  }
  
}

int main() {
// Input: root = [1,2,3,null,5,6,null,4]
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    // root->left->left = new TreeNode(5);
    root->left->right = new TreeNode(5);
    root->left->right->left = new TreeNode(4);
    root->right->left = new TreeNode(6);
    
    vector<int>holder = rightview(root);
    
    for(auto i : holder){
        cout << i << " " ;
    }
    // Clean up memory (not shown in the original code)
    delete root->left->right;
    delete root->left->left;
    delete root->left;
    delete root->right;
    delete root;
    
    return 0;
}
