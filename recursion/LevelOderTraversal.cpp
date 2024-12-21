#include <iostream>
#include <queue>
using namespace std;

struct Node {
    int key;
    Node* left;
    Node* right;

    Node(int k) {
        key = k;
        left = right = NULL;
    }
};

void Level(Node* root) {
    if (root == NULL) return;
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        Node* curr = q.front();
        q.pop();
        cout << curr->key << " ";
        if (curr->left != NULL)
            q.push(curr->left);
        if (curr->right != NULL)
            q.push(curr->right);
    }
}

int main() {
    Node* root = new Node(10);
    root->left = new Node(15);
    root->right = new Node(20);
    root->left->left = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);
    root->right->left->left = new Node(60);
    root->right->left->right = new Node(70);
    Level(root);
    return 0;
}
/*#include<iostream>
#include<queue>
using namespace std;
struct Node
{
   
    int key;
    Node *left;
    Node *right;

    Node(int k){
        key=k;
        left=right=NULL;

    }
};
void PrintLevelOrderLine(Node *root){
    if(root==NULL)
      return;
    queue<Node *>q;
    q.push(root);
    while(q.empty()==false){
        int count=q.size();
        for(int i=0;i<q.size();i++){
            Node *curr=q.front();
            q.pop();
            cout<<(curr->key)<<endl;
            if(curr->left!=NULL)
             q.push(curr->left);
            if(curr->right!=NULL)
             q.push(curr->right);
        }
        cout<<endl;
    }
}
int main() {
    Node* root = new Node(10);
    root->left = new Node(15);
    root->right = new Node(20);
    root->left->left = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);
    root->right->left->left = new Node(60);
    root->right->left->right = new Node(70);
    PrintLevelOrderLine(root);
    return 0;
}*/

