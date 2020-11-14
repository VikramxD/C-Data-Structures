#include <stdio.h>
#include <stdlib.h>
struct Node
{
  int data;
  struct Node *next;
}*first=NULL;
void create(int A[],int n)
{
  int i;
  struct Node *t,*last;
  first=(struct Node *)malloc(sizeof(struct Node));
  first->data=A[0];
  first->next=NULL;
  last=first;

    for(i=1;i<n;i++)
    {
      t=(struct Node*)malloc(sizeof(struct Node));
      t->data=A[i];
      t->next=NULL;
      last->next=t;
      last=t;
    }
}
int Count(struct Node*p){
    int l=0;
    while(p!=NULL){
        l=l+1;
        p=p->next;
    }
    return l;
}

int Delete(struct Node*p ,int index){
  struct Node *q;
  int x=-1;
  if(index < 1 || index > Count(p))
  {
    printf("Invalid");
    }
    if(index==1){
      q=first;
      x=first->data;
      free(q);
    return x;
    }
    else{
    p=first;
    q=NULL;
    for(int i=0;i<index-1; i++){
        q=p;
        p=p->next;

    }
    
    }
    if(p){
    q->next=p->next;
    x=p->data;
    free(p);
    }
    return x;
}

void Display(struct Node *p)
{
  while(p!=NULL)
  {
  printf("%d ",p->data);
  p=p->next;
  }
}


int main()
{
  struct Node *temp;
  int A[]={3,5,7,10,25,8,32,2};
  create(A,8);
  printf("%d\n",Delete(first,7));
  Display(first);

  return 0;
}