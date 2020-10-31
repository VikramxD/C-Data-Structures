#include<stdio.h>
#include<stdlib.h>
//Basic Node for linked list.
struct Node{
  int Data;
  struct Node*Next;
};
//Traversal and Printing.
void Print_list(struct Node*n)
{
while(n!=NULL)
{
printf("%d\n",n->Data);
n=n->Next;
}
}

//Create a five nodes
struct Node * head=NULL;
struct Node * second=NULL;
struct Node * third=NULL;
struct Node * fourth=NULL;
struct Node * fifth=NULL;
//Allocate the nodes 


int main(){
head= (struct Node *)malloc(sizeof(struct Node));
second=(struct Node *)malloc(sizeof(struct Node));
third= (struct Node *)malloc(sizeof(struct Node));
fourth= (struct Node *)malloc(sizeof(struct Node));
fifth=(struct Node *)malloc(sizeof(struct Node));

head->Data=1;
head->Next=second;
second->Data=2;
second->Next=third;
third->Data=3;
third->Next=fourth;
fourth->Data=4;
fourth->Next=fifth;
fifth->Data=12;
fifth->Next=NULL;     

Print_list(head);                 

return 0;
}



