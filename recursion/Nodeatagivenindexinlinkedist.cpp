#include<iostream>
using namespace std;

struct Node
{
   /* data */
   int data;
   Node *next;
   Node(int x){
      this.data=x;
      next=NULL;

   }
};
void PrintLinkedList(Node *head){
   Node *curr=head;

   while(curr!=NULL){
      cout>>curr->data;
      curr=curr->next;
   }
}
int main(){
   Node *head=new Node(30);
   head->next=new Node(10);
   head->next->next=new Node(40);
   head->next->next->next=new Node(50);
   PrintLinkedList(head);
}
n