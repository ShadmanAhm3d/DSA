#include <iostream>
#include <vector>

using namespace std;

class TreeNode {
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    
    // Constructor with value
    TreeNode(int x){
      val = x;
      left =NULL;
      right = NULL;
    }
    
};

/* class Solution {
public:
    void inorder(TreeNode* node, vector<int>& values) {
        if (node == nullptr) {
            values.push_back(-1); // Use a sentinel value for null nodes
            return;
        }
        inorder(node->left, values);
        values.push_back(node->val);
        inorder(node->right, values);
    }

    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int> valuesP, valuesQ;
        inorder(p, valuesP);
        inorder(q, valuesQ);

        if (valuesP.size() != valuesQ.size()) {
            return false;
        }

        for (int i = 0; i < valuesP.size(); i++) {
            if (valuesP[i] != valuesQ[i]) {
                return false;
            }
        }

        return true;
    }
}; */

class Solution{
    public:
// Check if two trees rooted at p and q are the same
bool isSameTree(TreeNode* p, TreeNode* q) {
    // If both p and q are empty (null) trees, they're the same
    if (p == nullptr && q == nullptr) {
        return true;
    }
    // If one tree is empty and the other is not, they're not the same
    if (p == nullptr || q == nullptr) {
        return false;
    }
    
    // Check if the current nodes have the same value
    bool currentNodesAreSame = p->val == q->val;
    
    // Check if the left subtrees of p and q are the same
    bool leftSubtreesAreSame = isSameTree(p->left, q->left);
    
    // Check if the right subtrees of p and q are the same
    bool rightSubtreesAreSame = isSameTree(p->right, q->right);
    
    // If the current nodes, left subtrees, and right subtrees are all the same,
    // then the entire trees rooted at p and q are the same
    return currentNodesAreSame && leftSubtreesAreSame && rightSubtreesAreSame;
}
};

int main() {
    TreeNode* root1 = new TreeNode(1);
    root1->left = new TreeNode(2);
    root1->right = new TreeNode(3);

    TreeNode* root2 = new TreeNode(1);
    root2->left = new TreeNode(2);
    root2->right = new TreeNode(3);

    Solution solution;
    bool areSame = solution.isSameTree(root1, root2);

    if (areSame) {
        cout << "The trees are the same." << endl;
    } else {
        cout << "The trees are not the same." << endl;
    }

    // Clean up memory
    delete root1;
    delete root2;

    return 0;
}

