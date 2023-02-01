#include <stdio.h>
#include<malloc.h>
struct node
{
  int Data;
  struct node * left;
  struct node * right;
};
struct node * creatNode(int data)
{
  struct node *n;
  n = (struct node *)malloc(sizeof(struct node));
  n->left = NULL;
  n->right = NULL;
  n->Data = data;
  return n;
}
int main(void) {
  // struct node *p;
  // p = (struct node *)malloc(sizeof(struct node));
  // p->data = 23;
  // p->left = NULL;
  // p->right = NULL;
  // struct node *p1;
  // p1 = (struct node *)malloc(sizeof(struct node));
  // p1->data = 23;
  // p1->left = NULL;
  // p1->right = NULL;
  // struct node *p2;
  // p2 = (struct node *)malloc(sizeof(struct node));
  // p2->data = 23;
  // p2->left = NULL;
  // p2->right = NULL;
  // linking the node

  struct node *p;
  p = creatNode(24);
  struct node *p1;
  p1 = creatNode(25);
  struct node *p2;
  p2 = creatNode(34);

printf(" the root node is = %d ",p->Data);
  p->left = p1;
  p->right = p2;
  return 0;
}
