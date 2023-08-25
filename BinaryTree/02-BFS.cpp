// Competitive Programming Setup

 #include <bits/stdc++.h>
 #include <algorithm>

using namespace std;
class Node{
  public:
    int data;
    Node *left;
    Node *right;

  Node(int data){
    this->data = data;
    this->left = NULL;
    this-> right = NULL;
  }
};


class Solution{

  public:
    vector<vector<int>>bfs(Node* root){

      queue<Node*>q;
     vector<vector<int>>ans;

     int loop = 0 ;
     q.push(root);
     if(!root) return ans;
      
     while(1){
       int size = q.size();
       if(size == 0){
         return ans;
       }
       vector<int>data;

       while(size > 0){
         Node* temp = q.front();
         data.push_back(temp->data);
         q.pop();
         if(temp->left!=NULL){
           q.push(temp->left);
         }

         if(temp->right!=NULL){
           q.push(temp->right);
         }

      size --;
       }
       loop++;
       if(loop % 2 == 0){
         // vector<int>data2 = data;
         reverse(data.begin(), data.end());;
         ans.push_back(data);
       }else{
         ans.push_back(data);
       }
     }
     return ans;
    }
};



int main() {
    Node* root = new Node(3);
    root->left = new Node(9);
    root->right = new Node(20);
    root->right->left = new Node(15);
    root->right->right = new Node(7);

    Solution sol;
    vector<vector<int>> holder = sol.bfs(root);

    // Printing the BFS traversal result
    for (const vector<int>& row : holder) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}


