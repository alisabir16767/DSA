#include<iostream>
using namespace std;
struct Node
{
   /* data */
   int key;
   Node *left;
   Node *right;
   Node(int k){
      key=k;
      left=right=NULL;

   }
};
void inorder(Node *root){
   if(root!=NULL){
      inorder(root->left);
      cout<<(root->key)<<" ";
      inorder(root->right);
   }
}
int main(){
   Node *root=new Node(10);
   root->left=new Node(20);
   root->right=new Node(30);
   root->left->left=new Node(40);
   inorder(root);
   return 0;
}