#include <iostream>
using namespace std;
struct Node {
    int key;
    Node *left;
    Node *right;
    Node(int k) {
        key=k;
        left=right=NULL;
    }
};
int search(Node* root, int x) {
    if (root == NULL) return -1;
    if (root->key == x) return 1;
    if (x < root->key) {
        return search(root->left, x);
    }
     else {
        return search(root->right, x);
    }
}
int main() {
   int x;
   cout<<"enter the value you want to search:";
   cin>>x;
    Node* root=new Node(4);
    root->left=new Node(2);
    root->right=new Node(5);
    root->left->left=new Node(1);
    root->left->right=new Node(3);
    root->right->right=new Node(6);
    cout<<search(root,x)<<endl;
    return 0;
}
