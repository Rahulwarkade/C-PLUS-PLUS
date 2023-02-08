#include <stdio.h>
#include<stdlib.h>
struct Node{
  int Data;
  struct Node *Next;
};
void LinkedListTrevarsal(struct Node *head){
  while(head != NULL){
    printf("%d\n",head->Data);
    head = head->Next;
  }
}
struct Node * DelectionAtFirst(struct Node *head){
  struct Node *ptr = head;
  head = head->Next;
  free(ptr);
  return head;
}
struct Node * DelectionAtIndex(struct Node *head, int index){
   struct Node *ptr = head;
   int i =0;
   while(i!= index-1){
       ptr = ptr->Next;
       i++;
   }
   struct Node *q = ptr->Next;
   ptr->Next = q->Next;
  free(q);
  return head;
}
struct Node * DelectionAtLast(struct Node *head){
  struct Node *ptr = head;
  struct Node *q = head->Next;
   while(q->Next!= NULL){
       ptr = ptr->Next;
       q = q->Next;
   }
  ptr->Next = NULL;
  free(q);
  return head;
}
struct Node * DelectionAtValue(struct Node *head, int value){
  struct Node * p = head;
  struct Node *q  = head->Next;
  while(q->Data != value && q->Next != NULL){
    p = p->Next;
    q = q->Next;
  }
  if(q->Data == value){
    p->Next = q->Next;
    free(q);
  }
  return head;
}
int main(){
  struct Node *head,*second,*third,*fourth,*fifth,*sixth;
  head = (struct Node*)malloc(sizeof(struct Node));
  second = (struct Node*)malloc(sizeof(struct Node));
  third = (struct Node*)malloc(sizeof(struct Node));
  fourth = (struct Node*)malloc(sizeof(struct Node));
  fifth = (struct Node*)malloc(sizeof(struct Node));
  sixth = (struct Node*)malloc(sizeof(struct Node));
  head->Data = 33;
  head->Next= second;
  second->Data = 88;
  second->Next = third;
  third->Data = 99;
  third->Next = fourth;
  fourth->Data = 90;
  fourth->Next = fifth;
  fifth->Data = 89;
  fifth->Next = sixth;
  sixth->Data = 75;
  sixth->Next = NULL;
  printf("Linked list trevarsal \n");
  LinkedListTrevarsal(head);
  // delecting first element from the linked list
 head =  DelectionAtFirst(head);
 printf("After delection of the first Node \n");
 LinkedListTrevarsal(head);
 // delecting Node between the Linked List 
 DelectionAtIndex(head,1);
 printf("After delection of the node frome the between of the linked list \n");
 LinkedListTrevarsal(head);
 // delecting node at the last from the linked list
 DelectionAtLast(head);
 printf("After decting a last node \n");
 LinkedListTrevarsal(head);
 // delection a node with the key value 
 DelectionAtValue(head,90);
 printf("After delecting a value from the linked list \n");
 LinkedListTrevarsal(head);
}
