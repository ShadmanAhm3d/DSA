#include <iostream>
#include <queue>
using namespace std;

class TreeNode {
public:
  int data;
  TreeNode *left;
  TreeNode *right;

  TreeNode(int d) {
    data = d;
    left = NULL;
    right = NULL;
  }
};

TreeNode *buildTree() {
  int data;
  cin >> data;
  if (data == -1) {
    return NULL;
  }

  TreeNode *root = new TreeNode(data);
  cout << "Enter left of " << data << endl;
  root->left = buildTree();
  cout << "Enter right of " << data << endl;
  root->right = buildTree();

  return root;
}

void bfs(TreeNode *root) {
  if (!root)
    return;
  queue<TreeNode *> q;

  q.push(root);
  while (!q.empty()) {
    TreeNode *temp = NULL;
    int n = q.size();
    while (n--) {
      temp = q.front();
      q.pop();

      cout << temp->data << " ";
      if (temp->left)
        q.push(temp->left);

      if (temp->right)
        q.push(temp->right);
    }
  }
}

int main() {
  cout << "Build Tree (-1 for NULL nodes):" << endl;
  TreeNode *root = buildTree();

  cout << "BFS Traversal: ";
  bfs(root);
  cout << endl;

  return 0;
}

