#include<iostream>
using namespace std;
struct Node
{
   /* data */
   int key;
   Node *left;
   Node *right;
   Node(int k){
      int key=k;
      left=right=NULL;
   }
};


Node *prev=NULL;
Node *BTToDLL(Node *root){
   if(root==NULL)
          return root;
Node *head=BTToDLL(root->left);
if(prev==NULL){ head=root;}
else{
   root->left=prev;
   root->right=root;
}
prev=root;
BTToDLL(root->right);
return head;
}
int main(){
   Node *root=new Node(10);
   root->left=new Node(5);
   root->right=new Node(20);
   root->right->left=new Node(30);
   root->right->right=new Node(35);
   root->left->left=new Node(12);
   return 0;
}
