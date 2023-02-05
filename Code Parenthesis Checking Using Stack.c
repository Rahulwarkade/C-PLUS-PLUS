#include <stdio.h>
#include<stdlib.h>
struct stack
{
  int size;
  char top;
  char *arr;
};
int isFull(struct stack *obj)
{
  if(obj->top == obj->size-1)
  return 1;
  return 0;
}
void push(struct stack *obj,char value)
{
  if(isFull(obj))
  {
    printf("stack overflow");
  }
  else
  {
    obj->top++;
    obj->arr[obj->top] = value;
  }
}
int isEmpty(struct stack *obj)
{
  if(obj->top == -1)
  return 1;
  return 0;
}
void pop(struct stack *obj)
{
  if(isEmpty(obj))
  {
    printf("stack Underflow");
  }
  else 
  {
    obj->top--;
  }
}
int parenthesis(struct stack *obj,char *exp)
{
  for(int i=0; exp[i]!='\0'; i++)
  {
    if(exp[i]=='(')
    {
      push(obj,'(');
    }
    else if(exp[i]==')')
    {
      if(isEmpty(obj))
      {
        return 0;
      }
      else
      {
        pop(obj);
      }
    }
  }
  if(isEmpty(obj))
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
int main(void) 
{
  struct stack *obj;
  obj->size = 100;
  obj->top = -1;
  obj->arr = (char *)malloc(obj->size*sizeof(char));
  char *exp = "(5+4*8)(((((0)))))";
  if(parenthesis(obj,exp)){
    printf("peranthisis is matching ");
  }
  else
  {
    printf("peranthisis is not matching ");
  }
  return 0;
}
