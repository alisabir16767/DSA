#include <iostream>
using namespace std;

template <typename T>
class TreeNode {
public:
  T data;
  vector<TreeNode<T>*> children;

  TreeNode(T data) : data(data) {}

  ~TreeNode() {
    for (TreeNode<T>* child : children) {
      delete child;
    }
  }

  void add_child(TreeNode<T>* child) {
    children.push_back(child);
  }

  void print_tree() {
    cout << data << endl;
    for (TreeNode<T>* child : children) {
      child->print_tree();
    }
  }
};

int main() {
  // Creating nodes only.
  TreeNode<int>* root = new TreeNode<int>(1);
  TreeNode<int>* node1 = new TreeNode<int>(2);
  TreeNode<int>* node2 = new TreeNode<int>(3);

  // Joining the paths of the tree.
  root->add_child(node1);
  root->add_child(node2);

  root->print_tree();

  delete root;

  return 0;
}
