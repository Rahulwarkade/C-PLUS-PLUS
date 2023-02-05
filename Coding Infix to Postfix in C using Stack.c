#include <stdio.h>
#include<stdlib.h>
#include<string.h>
struct stack
{
  int top;
  int size;
  char *arr;
};
int isOperator(char symbol)
{
  if(symbol == '-' || symbol == '+' || symbol == '/' || symbol == '*')
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
int precedance(char ch)
{
  if(ch == '/' || ch =='*')
  return 2;
  else if(ch == '+' || ch=='-')
  return 1;
  else
  return 0;
}
char stackTop(struct stack *obj)
{
 return obj->arr[obj->top];
}
int isFull(struct stack *obj)
{
  if(obj->top == obj->size-1)
  return 1;
  return 0;
}
void push(struct stack *obj,char ch)
{
  if(isFull(obj))
  {
    printf("stack overflow\n");
  }
  else
  {
    obj->top++;
    obj->arr[obj->top] = ch;
  }
}
int isEmpty(struct stack *obj)
{
  if(obj->top == -1)
  return 1;
  return 0;
}
char pop(struct stack *obj)
{ char ch;
  if(isEmpty(obj))
  {
    printf("stack underflow\n");
  }
  else
  {
    ch = obj->arr[obj->top];
    obj->top--;
  }
  return ch;
}
char *infixToPostfix(struct stack *obj,char *express)
{
  char *postfix = (char *)malloc(strlen(express)*sizeof(char));
  int i=0;
  int j=0;
  while(express[i]!= '\0')
  {
    if(!isOperator(express[i]))
    {
      postfix[j] = express[i];
      j++;
      i++;
    }
    else
    {
       if(precedance(express[i])>precedance(stackTop(obj)))
       {
          push(obj,express[i]);
          i++;
       }
       else
       {
        postfix[j] = pop(obj);
        j++; 
       }
    }
  }
  while(!isEmpty(obj))
  {
    postfix[j] = pop(obj);
    j++; 
  }
  postfix[j] = '\0';
  return postfix;
}
int main(void)
{
  struct stack *obj;
  obj->top = -1;
  obj->size = 100;
  obj->arr = (char *)malloc(obj->size*sizeof(char));
  char *express = "x-y/z+k*L";
  printf("The postfix express is = %s \n",infixToPostfix(obj,express));
  return 0;
}
