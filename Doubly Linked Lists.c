#include <stdio.h>
#include<stdlib.h>
struct Node {
  int Data;
  struct Node *Next;
  struct Node *Prev;
};
void DubblyLinkedList(struct Node *head){
  struct Node *ptr;
  while(head!=NULL){
    printf("%d\n",head->Data);
    ptr = head;
    head = head->Next;
  }
  printf("prev node elements are = \n");
  while(ptr!= NULL){
    printf("%d\n",ptr->Data);
    ptr = ptr->Prev;
  }
}
int main(void) {
struct Node *head,*second,*third,*fourth,*fifth;
head = (struct Node *)malloc(sizeof(struct Node));
second = (struct Node *)malloc(sizeof(struct Node));
third = (struct Node *)malloc(sizeof(struct Node));
fourth = (struct Node *)malloc(sizeof(struct Node));
fifth = (struct Node *)malloc(sizeof(struct Node));
head->Data = 9;
head->Next = second;
head->Prev = NULL;
second->Data = 8;
second->Next = third;
second->Prev = head;
third->Data = 7;
third->Next = fourth;
third->Prev = second;
fourth->Data = 6;
fourth->Next = fifth;
fourth->Prev = third;
fifth->Data = 5;
fifth->Next = NULL;
fifth->Prev = fourth;
printf("This is a dubboly linked list = \n");
DubblyLinkedList(head);
  return 0;
}
