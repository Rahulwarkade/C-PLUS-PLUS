#include <stdio.h>
#include<stdlib.h>
struct node
{
  int Data;
  struct node *left;
  struct node *right;
};
struct node *createNode(int data)
{
  struct node *n = (struct node *)malloc(sizeof(struct node));
  n->Data = data;
  n->left = NULL;
  n->right = NULL;
  return n;
}
void postOrderTraversal(struct node *root)
{
  if(root != NULL)
  {
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    printf("%d ",root->Data);
  }
}
void preOrderTraversal(struct node *root)
{
  if(root != NULL)
  {
    printf("%d ",root->Data);
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
  }
}
int main(void) 
{
  struct node *root,*lC1,*lC2,*lRC1,*rC1;
  root = createNode(4);
  lC1 = createNode(1);
  lC2 = createNode(5);
  lRC1 = createNode(2);
  rC1 = createNode(6);
  root->left = lC1;
  root->right = rC1;
  lC1->left = lC2;
  lC1->right = lRC1;
  printf("Preorder Traversal in tree \n");
  preOrderTraversal(root);
  printf("\nPostorder Traversal in tree \n");
  postOrderTraversal(root);
  return 0;
}
