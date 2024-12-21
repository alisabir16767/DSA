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

int  Height(Node *root){
 if(root==NULL)
 return 0;
 else 
 return max(Height(root->left),Height(root->right))+1;
}
int main(){
   Node *root=new Node(10);
   root->left=new Node(20);
   root->right=new Node(30);
   root->right->right=new Node(40);
   cout<<Height(root)<<endl;
   return 0;
}
