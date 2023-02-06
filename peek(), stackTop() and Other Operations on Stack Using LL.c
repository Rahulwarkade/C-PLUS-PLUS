#include <stdio.h>
#include<stdlib.h>
struct stack
{
int Data;
struct stack *Next;
};
int isFull(struct stack *node)
{
  struct stack *full = (struct stack *)malloc(sizeof(struct stack));
  if(full == NULL)
  return 1;
  return 0;
}
struct stack *push(struct stack *point,int value)
{
  if(isFull(point))
  {
    printf("Stack overflow \n");
  }
  else
  {
    struct stack *first = (struct stack *)malloc(sizeof(struct stack));
    first->Data = value;
    first->Next = point;
    point = first;
  }
  return point;
}
int isEmpty(struct stack *point)
{
  if(point == NULL)
  return 1;
  return 0;
}
int pop(struct stack **point)
{ int dn;
  if(isEmpty(*point))
  {
    printf("Stack Underflow \n");
    return -1;
  }
  else
  {
    struct stack *del = *point;
    *point = (*point)->Next;
    dn = del->Data;
    free(del);
  }
  return dn;
}
void stackTraversal(struct stack *ptr)
{
  while(ptr!=NULL)
  {
    printf("%d\n",ptr->Data);
    ptr = ptr->Next;
  }
}
int peek(struct stack *node,int position)
{ struct stack *point = node;
  for(int i=0; (i<position-1 && point!=NULL ); i++)
  {
    point = point->Next;
  }
  if(point != NULL)
  {
  return point->Data;
  }
  else
  {
    return -1;
  }
}
int main(void)
{
  struct stack *node;
  node = NULL;
  node = push(node,1);
  node = push(node,2);
  node = push(node,3);
  node = push(node,4);
  node = push(node,5);
  stackTraversal(node);
  int delNode = pop(&node);
  // pop(&node);
  // pop(&node);
  // pop(&node);
  // pop(&node);
  // pop(&node);
  printf("poped node is = %d\n",delNode);
  stackTraversal(node);
  for(int i=1; i<=4; i++)
  {
  int position = peek(node,i);
  printf("The value at postion %d is = %d\n",i,position);
  }
  return 0;
}
