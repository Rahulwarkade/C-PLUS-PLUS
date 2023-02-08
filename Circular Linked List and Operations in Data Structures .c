#include <stdio.h>
#include<stdlib.h>
struct Node{
  int Data;
  struct Node *Next;
};
void CircularLinkedList(struct Node * head){
  struct Node *ptr = head;
  do{
    printf("%d\n",ptr->Data);
    ptr = ptr->Next;
  }while(ptr!= head);
}
int main(void) {
 
struct Node *head,*second,*third;
head = (struct Node *)malloc(sizeof(struct Node));
second = (struct Node *)malloc(sizeof(struct Node));
third = (struct Node *)malloc(sizeof(struct Node));
head->Data = 1;
head->Next = second;
second->Data =2;
second->Next = third;
third->Data = 3;
third->Next = head;
printf("This the Circular linked list trevarsal \n");
CircularLinkedList(head);
return 0;
}
