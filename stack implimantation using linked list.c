#include <stdio.h>
#include<stdlib.h>
struct stack
{
  int Data;
  struct stack *Next;
};
int isEmpty(struct stack *access)
{
  if(access == NULL)
  return 1;
  return 0;
}
int isFull(struct stack *access)
{  
  struct stack *ptr = (struct stack *)malloc(sizeof(struct stack));
  if(ptr== NULL)
  return 1;
  return 0;
}
void LinkedListT(struct stack *ptr)
{
  while(ptr!=NULL)
  {
   printf("%d\n",ptr->Data);
   ptr = ptr->Next;
  }
}
struct stack * push(struct stack *access, int data)
{
  if(isFull(access))
{
  printf("stack overflow\n");
}
else
{
  struct stack *N = (struct stack *)malloc(sizeof(struct stack));
  N->Data = data;
  N->Next = access;
  access = N;
}
  return access;
}
int pop(struct stack **access)
{
  if(isEmpty(*access))
  {
    printf("Stack underflow\n");
    return -1;
  }
  else
  {
   struct stack *ptr = *access;
   *access = (*access)->Next;
   int x = (*access)->Data;
   free(ptr);
   return x;
  }
}
int main(void)
{
  struct stack *instance;
  instance = NULL;
  instance = push(instance,2);
  instance = push(instance,2);
  instance = push(instance,4);
  LinkedListT(instance);
  int element = pop(&instance);
  printf("poped element is = %d\n",element);
  LinkedListT(instance);
  return 0;
}
