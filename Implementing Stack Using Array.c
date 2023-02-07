#include <stdio.h>
#include<stdlib.h>
struct stack{
  int size;
  int index;
  int *arr;
};
int isEmpty(struct stack *ptr){
  if(ptr->index == -1){
    return 1;
  }
  return 0;
}
int isFull(struct stack *ptr){
  if(ptr->index == ptr->size-1){
    return 1;
  }
  return 0;
}
int main(void) {
  struct stack *obj;
  // obj.size = 80;
  // obj.index = -1;
  // obj.arr = (int *)malloc(obj.size*sizeof(int));
  obj->size = 80;
  obj->index = -1;
  obj->arr = (int *)malloc(obj->size*sizeof(int));
  obj->arr[0] = 24;// poping value in side the stack mannualy
  obj->index++;
  (isEmpty(obj))?printf("The stack is Empty \n"):printf("The stack is not empty \n");
  (isFull(obj))?printf("The stack is full \n"):printf("The stack is not full\n");
  return 0;
}
