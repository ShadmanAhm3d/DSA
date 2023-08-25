#include <iostream>

class TreeNode {
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

bool isSumTree(TreeNode* root) {
    if (root == nullptr) {
        return true;  // An empty tree is considered a sum tree
    }

    if (root->left == nullptr && root->right == nullptr) {
        return true;  // Leaf node is always a sum tree
    }

    int leftSum = (root->left != nullptr) ? root->left->val : 0;
    int rightSum = (root->right != nullptr) ? root->right->val : 0;

    if (root->val == leftSum + rightSum &&
        isSumTree(root->left) && isSumTree(root->right)) {
        return true;
    }

    return false;
}

int main() {
    TreeNode* root = new TreeNode(20);
    root->left = new TreeNode(10);
    root->right = new TreeNode(10);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(6);
    root->right->right = new TreeNode(10);

    bool result = isSumTree(root);

    if (result) {
        std::cout << "All nodes have the value equal to the sum of their child nodes." << std::endl;
    } else {
        std::cout << "Not all nodes have the value equal to the sum of their child nodes." << std::endl;
    }

    // Clean up memory
    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right->right;
    delete root->right;
    delete root;

    return 0;
}

