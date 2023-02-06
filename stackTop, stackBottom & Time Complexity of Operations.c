#include <stdio.h>
#include<stdlib.h>
struct stack{
  int size;
  int index;
  int *arr;
};
int isFull(struct stack *ptr){
  if(ptr->index == ptr->size -1){
    return 1;
    printf("Stack overflow \n");
  }
  else{
    return 0;
  }
}
int isEmpty(struct stack *ptr){
  if(ptr->index == -1){
    return 1;
    printf("Stack underflow\n");
  }
  else{
    return 0;
  }
}
void push(struct stack *ptr,int data){
  if(isFull(ptr)){
    printf("\nThis element %d can't be pushed to this stack",data);
  }
  else{
    ptr->index++;
    ptr->arr[ptr->index] = data;
    printf("\n%d is pushed in %dth index to the stack \n",data,ptr->index);
  }
}
void pop(struct stack *ptr){
  if(isEmpty(ptr)){
    // return -1;
    printf("\nyou can't pop elements from the stack");
  }
  else{
    int data = ptr->arr[ptr->index];
    printf("\n%d is poped in %dth index from the stack ",data,ptr->index);
    ptr->index--;
    // return data;
  }
}
int peek(struct stack *ptr,int position){
  int indexId = ptr->index-position+1;
  if(indexId<0){
    return -1;
    printf("invalid input\n");
  }
  else{
       return ptr->arr[indexId];
  }
}
void stackTop(struct stack *ins, int top){
printf("The top most element of this stack is %d\n",ins->arr[top]);
};
void stackBottom(struct stack *ins){
  printf("The bottom most element of this stack is %d\n",ins->arr[0]);
}
int main(void) {
/*
Time complexities of other operations:

isEmpty(): This operation just checks if the top member equals -1. This works in a constant time, hence, O(1).
isFull(): This operation just checks if the top member equals size -1. Even this works in a constant time, hence, O(1).
push(): Pushing an element in a stack needs you to just increase the value of top by 1 and insert the element at the index. This is again a case of O(1).
pop(): Popping an element in a stack needs you to just decrease the value of top by 1 and return the element we ignored. This is again a case of O(1).
peek(): Peeking at a position just returns the element at the index, (top - position + 1), which happens to work in a constant time. So, even this is an example of O(1).
So, basically all the operations we discussed follow a constant time complexity.
*/
 struct stack *instance;
 instance->size = 6;
 instance->index = -1;
 instance->arr = (int *)malloc(instance->size*sizeof(int));
 push(instance,24);
 push(instance,89);
 push(instance,99);
 push(instance,88);
 push(instance,77);
//  pop(instance);
for(int i=1; i<=instance->index+1; i++){
  printf("the value at postion %d is = %d\n",i,peek(instance,i));
}
stackTop(instance,instance->index);
stackBottom(instance);
  return 0;
}
