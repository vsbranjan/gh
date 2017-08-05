#include <stdio.h>
#include <math.h>
#include <stdlib.h>
struct stack
{
   unsigned capacity;
   int top;
   int *array;
   char name;
};
typedef struct stack* stkptr;
stkptr createstack(unsigned capacity,char name)
{
    stkptr stack=(stkptr) malloc(sizeof(struct stack));
    stack -> capacity = capacity;
    stack -> top = -1;
    stack->name=name;
    stack -> array =(int*)malloc(stack -> capacity * sizeof(int));
    return stack;
}
void push(stkptr stack, int item)
{
    if (stack->top==stack->capacity-1)
        return;
    stack -> array[++stack -> top] = item;
}
int pop(stkptr stack)
{
    if (stack->top == -1)
        return -32000;
    return stack -> array[stack -> top--];
}
int show(stkptr stack)
{
if (stack->top == -1)
        return -32000;
return stack -> array[stack -> top];
}

void toh(int nod, stkptr src, stkptr aux,stkptr dest)
{
int i;
for (i = nod; i >= 1; i--)
push(src, i);

}

void main()
{
int i;
char name='c';
stkptr src;
src = createstack(5,name);

for(i=0;i<5;i++)
 push(src,i);
for(i=0;i<5;i++)
printf("%d popped from stack\n",pop(src));
printf("name of satck is %c",src->name);
}
