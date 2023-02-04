#include <stdio.h>
#include<stdlib.h>
struct queue
{
  int Data;
  struct queue *Next;
};
int isFull(struct queue *rear)
{
  struct queue *Node = (struct queue *)malloc(sizeof(struct queue));
  if(Node == NULL)
  return 1;
  return 0;
}
void enqueue(struct queue **front,struct queue **rear,int value)
{
  struct queue *Node = (struct queue *)malloc(sizeof(struct queue));
  if(isFull(*rear))
  {
    printf("Queue is overflow\n");
  }
  else
  {
    Node->Data = value;
    Node->Next = NULL;
    if(*front == NULL)
    {
      *front = *rear = Node;
    }
    else
    {
      (*rear)->Next = Node;
      *rear = Node;
    }
    printf("enqueue element is = %d\n",(*rear)->Data);
  }
}
int isEmpty(struct queue *front)
{
  if(front == NULL)
  return 1;
  return 0;
}
void dequeue(struct queue **front,struct queue **rear)
{
  int delNode = -1;
  if(isEmpty(*front))
  {
    printf("Queue is underflow\n");
  }
  else
  {
    struct queue *node = *front;
    *front = (*front)->Next;
    delNode = node->Data;
    free(node);
  }
  printf("Dequeue element is %d\n",delNode);
}
void queueTrevarsal(struct queue *front)
{
  while(front != NULL)
  {
    printf("element is = %d\n",(front)->Data);
    front = (front)->Next;
  }
}
int main(void) {
  struct queue *front,*rear;
  front=rear= NULL;
  enqueue(&front,&rear,24);
  enqueue(&front,&rear,25);
  enqueue(&front,&rear,26);
  enqueue(&front,&rear,27);
  queueTrevarsal(front);
  dequeue(&front,&rear);
  dequeue(&front,&rear);
  dequeue(&front,&rear);
  queueTrevarsal(front);
  return 0;
}
