#include <stdio.h>
#include<stdlib.h>
struct queue
{
  int size;
  int front;
  int rear;
  int *arr;
};
int isFull(struct queue *q)
{
  if(q->rear == q->size-1)
  return 1;
  return 0;
}
void enqueue(struct queue *q,int value)
{
  if(isFull(q))
  {
    printf("queue is full \n");
  }
  else 
  {
    q->rear++;
    q->arr[q->rear] = value;
  }
}
int isEmpty(struct queue *q)
{
  if(q->front == q->rear)
  return 1;
  return 0;
}
int dequeue(struct queue *q)
{
   int a = -1;
  if(isEmpty(q))
  {
    printf("queue is empty \n");
  }
  else
  {
    q->front++;
    a = q->arr[q->front];
  }
  return a;
}
int main(void) 
{
  struct queue q;
  q.size = 3;
  q.front = q.rear = -1;
  int *arr = (int *)malloc(q.size*sizeof(int));
  enqueue(&q,24);
  enqueue(&q,25);
  enqueue(&q,26);
  printf("dequeue elemnet is = %d \n",dequeue(&q));
  printf("dequeue elemnet is = %d \n",dequeue(&q));
  printf("dequeue elemnet is = %d \n",dequeue(&q));
  return 0;
}
