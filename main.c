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
        l++;
        p=p->next;
    }
    return l;
}

int Delete(struct Node*p ,int index){
    struct Node *q;
    int x=-1;
    if(index < 1 || index > Count(p)){
        printf("Invalid");
    }
    if(index==1){
        q=first;
        x=first->data;
        free(q);
        return x;
    }
    else {
       for(int i=0; i<index-1; i++)
       {
           q=p;
           p=p->next;
       }
       q->next=p->next;
       x=p->data;
       free(p);
    }
    }
    void RemoveDuplicate(struct Node*p)
            {
    struct Node*q=p->next;
    while(q!=NULL){
        if(q->data!=p->data){
            p=q;
            q=q->next;

        }
        else{
            p->next=q->next;
            free(q);
            q=p->next;

        }
    }

}
    void Display(struct Node*p)
    { while(p!=NULL){
            printf("%d\n",p->data);
            p=p->next;
    }

    }

    void Reverse(struct Node*p){
    struct Node*q=NULL;
    struct Node*r=NULL;
    while(p!=NULL){
        r=q;
        q=p;
        p=p->next;
        q->next=r;

    }

    first=q;
}
   void RecReverse(struct Node*q,struct Node*p){
    if(p){
        RecReverse(p,p->next);
        p->next=q;
    }
    else{
        q=first;
    }
}

    int main(){
    int A[]={12,23,34,34,56,13};
    create(A,6);
    Reverse(first);

    Display(first);
}