#include<iostream>
using namespace std;
struct Node{
int key;
Node *left;
Node *right;

Node(int k){
   key=k;
   left=right=NULL;

}
};
void PostOrder(Node *root){
   if(root!=NULL){
      PostOrder(root->left);
      PostOrder(root->right);
      cout<<(root->key)<<" ";
   }
}
int main(){
   Node *root=new Node(10);
   root->left=new Node(20);
   root->right=new Node(30);
   root->right->right=new Node(50);
   root->right->left=new Node(40);
   PostOrder(root);
   return 0;
}