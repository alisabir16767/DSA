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
void PreOrder(Node *root ){
   if(root!=NULL){
      cout<<(root->key)<<" ";
      PreOrder(root->left);
      PreOrder(root->right);
   }
}
int main(){
   Node *root=new Node(10);
   root->left=new Node(20);
   root->right=new Node(30);
   root->right->left=new Node(40);
   root->right->right=new Node(50);
   PreOrder(root);
   return 0;
}
