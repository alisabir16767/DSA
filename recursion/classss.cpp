//minimum and maximum in a binary search tree.Traverse the tree acc. to find the node with the minimum and maximum value
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
int search(Node *root,int x){
   if(root==NULL) return -1;
   if(root->key==x) return x;
   else{
      root->le
   }
}
