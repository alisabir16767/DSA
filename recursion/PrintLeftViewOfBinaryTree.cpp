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
int MaxLevel=0;
void PrintLeft(Node *root,int level){
   if(root==NULL) return;
   if(MaxLevel<level){
      cout<<(root->key)<<" ";
      MaxLevel=level;
   }
   PrintLeft(root->left,level+1);
   PrintLeft(root->right,level+1);
   
   void PrintLeftView(root,1){
      PrintLeft(root,1);
   }
}
int main(){
   Node *root=new Node(10);
   root->left=new Node(20);
   root->right=new Node(30);
   root->left->left=new Node(40);
   root->left->right=new Node(50);
   root->right->right=new Node(60);
   PrintLeft(root,level);
   return 0;
}
