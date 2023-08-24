// Competitive Programming Setup
 #include <iostream>
 #include <unordered_map>
 #include <unordered_set>
 #include <vector>
 #include <algorithm>

using namespace std;
class node{
  public:
  int data ; 
  node *lp;
  node *rp;

  node(int d){
    data = d;
    lp = NULL;
    rp = NULL;
  }
};

node* buildTree(node *root) {

  cout << "Enter the data" << endl;
  int data;
  cin >> data;

  root = new node(data);

  if (data == -1)
    return NULL;

  cout << "Enter the data on the left of " << data << endl;
  root->lp = buildTree(root->lp);
  cout << "Enter the data on the right of " << data << endl;
  root->rp = buildTree(root->rp);
  return root;
}

void inorder(node * root){
  if(root == NULL){
    return;
  }

  //L -> left chalte chalo;
  inorder(root->lp);
  cout << root->data << " " ;
  inorder(root->rp);


}

void preorder(node * root){
  if(root == NULL){
    return;
  }

  //L -> left chalte chalo;
  cout << root->data << " " ;
  inorder(root->lp);
  inorder(root->rp);


}
void postorder(node * root){
  if(root == NULL){
    return;
  }

  //L -> left chalte chalo;
  inorder(root->lp);
  inorder(root->rp);
  cout << root->data << " " ;


}
int main() {
  node *root = NULL;
  root = buildTree(root);
  inorder(root) ;
  cout << endl;
  preorder(root) ;

  cout << endl;
  postorder(root) ;
  cout << endl;
  return 0 ;

 
}
