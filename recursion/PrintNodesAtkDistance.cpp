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
   if(root == NULL) return;
   if(n==0) cout<<(root->key)<<" ";
   else {
      PrintkDist(root->left,n-1);
      PrintkDist(root->right,n-1);
   }
}
int main(){
   Node *root=new Node(10);
   root->left=new Node(20);
   root->right=new Node(30);
   root->left->left=new Node(40);
   root->left->right=new Node(50);
   root->right->right=new Node(70);
   root->right->right->right=new Node(80);
   
   PrintkDist(root,2);
   return 0;
}
