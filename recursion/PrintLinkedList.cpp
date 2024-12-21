#include<iostream>
using namespace std;
struct Node
{
   /* data */
   int data;
   Node *next;
   Node(int x){
      data=x;
      next=NULL;
   }
};
void PrintList(Node *head){
   Node *curr=head;
   while(curr!=NULL){
      cout<<curr->data<<"\t";
      curr=curr->next;
   }
}
int main(){
   Node *head=new Node(1);
   head->next=new Node(3);
   head->next->next=new Node(6); 
   PrintList(head);
   return 0;
}
