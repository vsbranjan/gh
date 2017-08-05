#include<stdio.h>
#include <stdlib.h>
typedef struct stack
{
int data;
struct stack* next;
} stack;
typedef stack* stkptr;
void push(stkptr *s,int a)
{
stkptr newnode=(stkptr)malloc(sizeof(stack));
newnode->data=a;
newnode->next=*s;
*s=newnode;
printf("%d is pushed in stack\n",a);
}
stkptr pop(stkptr *s)
{
if(*s==NULL)
{
printf("stack is empty\n");
return NULL;
}
stkptr temp=*s;
//int value=temp->data;
*s=temp->next;
//free(temp);
return temp;
}
void main()
{
stkptr s=NULL;
push(&s,10);
push(&s,20);
push(&s,30);
//if(pop(&s)!=NULL)
printf("%d popped from stack\n", pop(&s)->data);
//if(pop(&s)!=NULL)
printf("%d popped from stack\n", pop(&s)->data);
//if(pop(&s)!=NULL)
printf("%d popped from stack\n", pop(&s)->data);
if(pop(&s)!=NULL)
printf("%d popped from stack\n", pop(&s)->data);
}
