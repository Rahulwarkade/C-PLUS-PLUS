#include <stdio.h>
#include<stdlib.h>
struct Node{
  int data;
  struct Node *next;
};
void traversalLinkedL(struct Node *head){
  while(head!=NULL){
    printf("element is : %d\n",(*head).data);
    head = head->next;
  }
}
int main(void) {
struct Node *head,*second,*third;
head = (struct Node *)malloc(sizeof(struct Node));
second = (struct Node *)malloc(sizeof(struct Node));
third = (struct Node *)malloc(sizeof(struct Node));
head->data = 24;
head->next = second;
second->data = 98;
(*second).next = third;
(*third).data = 29;
(*third).next = NULL;
traversalLinkedL(head);
return 0;
}
