#include <stdio.h>
#include<stdlib.h>
struct stack
{
  int top;
  int size;
  char *arr;
};
int isFull(struct stack *obj)
{
  if(obj->top == obj->size)
  return 1;
  return 0;
}
void push(struct stack *obj, char value)
{
  if(isFull(obj))
  {
    printf("stack overflow \n");
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
char pop(struct stack *obj)
{
  char poped;
  if(isEmpty(obj))
  {
    printf("stack underflow\n");
  }
  else
  {
   poped = obj->arr[obj->top];
   obj->top--;
  }
  return poped;
}
int checking(char poped,char exp)
{
  if(poped == '{'&& exp == '}')
  {
    return 1;
  }
  if(poped == '(' && exp == ')')
  {
    return 1;
  }
  if(poped == '[' && exp == ']')
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
int peranthesisMatching(struct stack *obj,char *exp)
{char popedCh;
  for(int i=0; exp[i]!='\0'; i++)
  {
    if(exp[i]=='(' || exp[i]=='{' || exp[i] == '[')
    {
      push(obj,exp[i]);
    }
    else if(exp[i]==')' || exp[i]=='}' || exp[i] == ']')
    {
      if(isEmpty(obj))
      {
        return 0;
      }
      else
      {
      popedCh = pop(obj);
      if(!checking(popedCh,exp[i]))
      {
        return 0;
      }
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
  obj->top = -1;
  obj->size = 100;
  obj->arr = (char *)malloc(obj->size*(sizeof(char)));
  char *exp = "[3+34]+(34_+23)*{34(2-3)}";
  if(peranthesisMatching(obj,exp))
  {
    printf("The given expression is balanced \n");
  }
  else
  {
    printf("The given expression is unbalanced \n");
  }
  return 0;
}
