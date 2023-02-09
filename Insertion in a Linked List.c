#include <stdio.h>
#include<stdlib.h>
struct Node{
 int data;
 struct Node *Next;
};
void insertion(struct Node *head){
  while(head != NULL){
  printf("%d\n",head->data);
  head = head->Next;
  }
}
struct Node *insertionAtBeginning(struct Node *head, int data){
  struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
(*ptr).data = data;
ptr->Next = head;
return ptr;
}
struct Node * insertAtIndex(struct Node *head,int index,int data){
  struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
  struct Node *p = head;
  int i=0;
  while(i!=index-1){
    p = p->Next;
    i++;
  }
  ptr->data = data;
  ptr->Next = p->Next;
  p->Next = ptr;
  return head;
}
struct Node *insertionAtEnd(struct Node *head,int data){
struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
ptr->data = data;
struct Node *p = head;
while(p->Next!=NULL){
  p = p->Next;
}
p->Next = ptr;
ptr->Next = NULL;
return head;
}
struct Node * insertionAfterNode(struct Node *prevNode,int data){
struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
ptr->data = data;
ptr->Next = prevNode->Next;
prevNode->Next = ptr;
return ptr;
}
int main(void) {
 struct Node *head,*second,*third;
head = (struct Node *)malloc(sizeof(struct Node));
// printf("the size of struct node is = %lu\n",sizeof(struct Node))
second = (struct Node *)malloc(sizeof(struct Node));
third = (struct Node *)malloc(sizeof(struct Node));
(*head).data = 24;
head->Next = second;
(*second).data = 4;
second->Next = third;
(*third).data = 2;
third->Next = NULL;
printf("linked list traversal \n");
insertion(head);
// case 1 Insert at beginning 
head = insertionAtBeginning(head,42);
printf("Insertion at the begining of the linked list\n");
insertion(head);
// case 2 Insert at between
insertAtIndex(head,3,25);
printf("Insertion at the between of the linked list \n");
insertion(head);
// case 3 Insert at ending
insertionAtEnd(head,100);
printf("Insertion at the End of the linked list \n");
insertion(head);
// case 4 Insert after a Node
insertionAfterNode(third,99);
printf("Instertion after a give node in linked list \n");
insertion(head);
 return 0;
}
