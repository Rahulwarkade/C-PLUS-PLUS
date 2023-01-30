#include <stdio.h>
#include<stdlib.h>
struct node
{
  int Data;
  struct node *left;
  struct  node *right;
};
struct node * createNode(int data)
{
  struct node * rootN = (struct node *)malloc(sizeof(struct node));
  rootN->Data = data;
  rootN->left = NULL;
  rootN->right = NULL;
  return rootN;
}
void inOrederTraversal(struct node *root)
{
  if(root!= NULL)
  {
    inOrederTraversal(root->left);
    printf("%d ",root->Data);
    inOrederTraversal(root->right);
  }
}
int main(void) 
{
  struct node *root,*l1,*l2,*l1R1,*r1;
  printf("= %ld ",sizeof(root));
  root = createNode(5);
  r1 =  createNode(6);
  l1 = createNode(3);
  l2 = createNode(1);
  l1R1 = createNode(4);
  root->left = l1;
  root->right = r1;
  l1->left = l2;
  l1->right = l1R1;
  inOrederTraversal(root);
  return 0;
}
