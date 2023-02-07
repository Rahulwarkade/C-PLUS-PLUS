#include <stdio.h>
#include<stdlib.h>
struct stack{
  int size;
  int index;
  int *arr;
};
int isEmpty(struct stack *ptr){
  if(ptr->index == -1){
    return 1 ;
}
else{
  return 0;
}
}
int isFull(struct stack *ptr){
  if(ptr->index == ptr->size-1){
    return 1 ;
}
else{
  return 0;
}
}
void push(struct stack *ptr,int value){
  if(isFull(ptr)){
    printf("Stack overflow! The value %d is not pushed to this stack \n",value);
  }
  else{
    ptr->index++;
    ptr->arr[ptr->index] = value;
  }
}
int pop(struct stack *ptr){
 int val = ptr->arr[ptr->index];
  if(isEmpty(ptr)){
    printf("Stack underflow! the value %d is not poped to this stack \n",val);
    return -1;
  }
  else{
    ptr->index--;
    return val;
  }
}
int main(void) {
 struct stack *instance;
 instance->size = 10;
 instance->index = -1;
 instance->arr = (int *)malloc(instance->size*sizeof(int));
 push(instance,24);
 push(instance,22);
 push(instance,242);
 push(instance,221);
 push(instance,14);
 push(instance,44);
 push(instance,74);
 push(instance,74);
 push(instance,25);
 push(instance,20);
 printf("After pushing stack is full : %d\n",isFull(instance));
 printf("After pushing stack is Empty : %d\n",isEmpty(instance));
 pop(instance);
 printf("After pushing stack is full : %d\n",isFull(instance));
 printf("After pushing stack is Empty : %d\n",isEmpty(instance));
 printf("poped this %d from the stack \n",pop(instance));
 printf("poped this %d from the stack \n",pop(instance));
 printf("poped this %d from the stack \n",pop(instance));
 printf("poped this %d from the stack \n",pop(instance));
 printf("poped this %d from the stack \n",pop(instance));
 pop(instance);
 pop(instance);
 pop(instance);
 printf("poped this %d from the stack \n",pop(instance));
 printf("After poping stack is full : %d\n",isFull(instance));
 printf("After poping stack is Empty : %d\n",isEmpty(instance));
  return 0;
}
