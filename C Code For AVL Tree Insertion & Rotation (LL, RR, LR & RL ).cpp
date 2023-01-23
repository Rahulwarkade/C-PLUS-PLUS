#include <stdio.h>
#include<stdlib.h>
struct node 
{
  int Data;
  struct node *left;
  struct node *right;
  int height;
};
struct node *createNode(int data)
{
  struct node *rootN = (struct node *)malloc(sizeof(struct node));
  rootN->Data = data;
  rootN->left = NULL;
  rootN->right = NULL;
  rootN->height = 1;
  return rootN;
}
void inOrderTraversal(struct node *root)
{
  if(root!= NULL)
  {
    inOrderTraversal(root->left);
    printf("%d ",root->Data);
    inOrderTraversal(root->right);
  }
}
int getheight(struct node *n)
{
  if(n==NULL)
  {
    return 0;
  }
  return n->height;
}
int max(int a,int b)
{
  return (a>b)?a:b;
}
int getBalanceFactor(struct node *n)
{
  if(n==NULL)
  {
    return 0;
  }
  return getheight(n->left) - getheight(n->right);
}
struct node *RightRotation(struct node *y)
{
  struct node *x = y->left;
  struct node *T2 = x->right;
  x->right = y;
  y->left = T2;
  x->height = max(getheight(x->left),getheight(x->right)) +1;
  y->height = max(getheight(y->left),getheight(y->right)) +1;
  return x;
}
struct node *insertAVL(struct node *root,int data)
{
  if(root == NULL)
  {
    return createNode(data);
  }
  if(data>root->Data)
  {
    root->right = insertAVL(root->right,data);
  }
 else
  {
    root->left = insertAVL(root->left,data);
  }
root->height = 1+(max(getheight(root->left),getheight(root->right)));
int bF = getBalanceFactor(root);

if(bF>1 && key)
  return root;
}
int main(void) 
{
  struct node *root = NULL;
  root = insertAVL(root,1);
  root = insertAVL(root,2);
  root = insertAVL(root,3);
  root = insertAVL(root,4);
  root = insertAVL(root,6);
  root = insertAVL(root,5);
  inOrderTraversal(root);
  return 0;
}
