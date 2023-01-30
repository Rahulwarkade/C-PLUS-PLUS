#include <stdio.h>
#include<malloc.h>
struct node
{
  int Data; 
  struct node *left;
  struct node *right;
};
struct node *createNode(int data)
{
   struct node *No;
  No = (struct node*)malloc(sizeof(struct node));
  No->Data = data;
  No->left = NULL;
  No->right = NULL;
  return No;
}
void preOrderTraversal(struct node *root)
{
  if(root!=NULL)
  {
    printf("%d ",root->Data);
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
  }
}
int main(void) 
{ struct node *root,*child1,*child2,*child3,*rchild;
  root = createNode(4);
  child1 = createNode(1);
  child2 = createNode(5);
  child3 = createNode(2);
  rchild = createNode(6);
  root->left = child1;
  root->right = rchild;
  child1->left = child2;
  child1->right = child3;

  preOrderTraversal(root);
  return 0;
}
