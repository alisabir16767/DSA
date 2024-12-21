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
int getMax(Node *root){
   if(root==NULL)
    return INT_MIN;
   else 
     return max(root->key,max(getMax(root->left),getMax(root->right)));
}
int main(){
   Node *root=new Node(10);
   root->left=new Node(30);
   root->right=new Node(40);
   root->left->left=new Node(80);
   root->left->left->right=new Node(70);
   root->right->left=new Node(60);
   root->right->right=new Node(20);
   cout<<getMax(root)<<endl;
   return 0;
}
