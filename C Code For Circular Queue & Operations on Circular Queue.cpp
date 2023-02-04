#include <stdio.h>
#include<stdlib.h>
struct circularQueue
{
  int size;
  int front;
  int rear;
  int *arr;
};
int isFull(struct circularQueue *q)
{
  if((q->rear+1)%q->size == q->front)
  return 1;
  return 0;
}
void enqueue(struct circularQueue *q,int value)
{
 if(isFull(q))
 {
   printf("circularQueue is overflow\n");
 }
 else
 {
   q->rear = (q->rear+1)%q->size;
   q->arr[q->rear] = value;
   printf("The enqueue element is = %d\n",value);
 }
}
int isEmpty(struct circularQueue *q)
{
  if(q->rear == q->front)
  return 1;
  return 0;
}
void dequeue(struct circularQueue *q)
{ 
  int a = 0;
  if(isEmpty(q))
  {
    printf("circularQueue is underflow\n");
  }
  else
  {
    q->front =  (q->front+1)%q->size;
    a = q->arr[q->front];
    printf("Dequeue element is = %d\n",a);
  }
}
int main(void) 
{
  struct circularQueue q;
  q.size = 3;
  q.front = q.rear = 0;
  enqueue(&q,24);
  enqueue(&q,24);
  enqueue(&q,24);
  dequeue(&q);
  dequeue(&q);
  dequeue(&q);
  enqueue(&q,24);
  return 0;
}
