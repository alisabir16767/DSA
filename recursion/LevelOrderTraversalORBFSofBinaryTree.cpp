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
void PrintkDist(Node *root,int n){
   if(root==0) return;
   if(n==0) cout<<(root->key)<<"\t";
   else{
      PrintkDist(root->left,n-1);
      PrintkDist(root->right,n-1);
   }
}
int main(){
   Node *root=new Node(10);
   root->left=new Node(20);
   root->right=new Node(30);
   root->left->left=new Node(8);
   root->left->right=new Node(7);
   root->left->right->left=new Node(9);
   root->left->right->right=new Node(15);
   root->right->right=new Node(6);
   for(int n=0;n<4;n++){
      PrintkDist(root,n);
   }
}
