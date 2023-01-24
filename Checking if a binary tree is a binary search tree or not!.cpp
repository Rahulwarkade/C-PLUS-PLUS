#include <stdio.h>
#include<malloc.h>
struct node 
{
  int Data;
  struct node *left;
  struct node *right;
};
struct node * createNode(int data)
{
  struct node * rootN = (struct node *)malloc(sizeof(struct node));
  rootN->Data = data;
  rootN->left = NULL;
  rootN->right = NULL;
  return rootN;
}
int isBST(struct node *root)
{
  static struct node *prev = NULL;
  if(root!=NULL)
  {
    if(!isBST(root->left))
    {
      return 0;
    }
    if(prev != NULL && root->Data <= prev->Data)
    {
      return 0;
    }
    prev = root;
    return isBST(root->right);
  }
  else
  {
    return 1;
  }
}
int main(void) 
{
  struct node *root,*l1,*l2,*l1R1,*r1;
  root = createNode(5);
  l1 = createNode(3);
  l2 = createNode(1);
  l1R1 = createNode(4);
  r1 = createNode( 6);
  root->left = l1;
  root->right = r1;
  l1->left = l2;
  l1->right = l1R1;

  if(isBST(root)){
    printf("This given tree is a BINARY SEARCH TREE \n");
  }
  else{
    printf("This give tree is not a BINARY SEARCH TREE ");
  }
  return 0;
}
