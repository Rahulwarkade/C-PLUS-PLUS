#include <stdio.h>
#include<stdlib.h>
struct node
{
  int Data;
  struct node *left;
  struct node *right;
};
struct node * createNode(int key)
{
  struct node *rootN = (struct node *)malloc(sizeof(struct node));
  rootN->Data = key;
  rootN->left = NULL;
  rootN->right = NULL;
  return rootN;
}
void inOrderTraversal(struct node * root)
{
  if(root!=NULL)
  {
    inOrderTraversal(root->left);
    printf("%d ",root->Data);
    inOrderTraversal(root->right);
  }
}
void insertionInBST(struct node *root, int key)
{
  struct node *prev;
  while(root!=NULL)
  {
    prev = root;
    if(root->Data == key)
    {
      printf("%d is already present in BST \n",key);
      return;
    }
    else if(key>root->Data)
    {
      root = root->right;
    }
    else
    {
      root = root->left;
    }
  }
  struct node *newNode = createNode(key);
  if(prev->Data>key)
  {
    prev->left = newNode;
  }
  else
  {
    prev->right = newNode;
  }
}
struct node *inOrederPredeccer(struct node *root)
{
  root = root->left;
  while(root->right!=NULL)
  {
    root = root->right;
  }
  return root;
}
struct node * delectionInBST(struct node *root,int key)
{
  struct node *iPre;
  if(root==NULL)
  {
    return NULL;
  }
  if(root->left == NULL && root->right == NULL)
  {
    free(root);
    return NULL;
  }
  if (root->Data>key)
  {
    root->left = delectionInBST(root->left,key);
  }
  else if (root->Data<key)
  {
    root->right = delectionInBST(root->right,key);
  }
  else
  {
    iPre = inOrederPredeccer(root);
    root->Data = iPre->Data;
    root->left = delectionInBST(root->left, iPre->Data);
  }
  return root;
}
int main(void) 
{
  struct node *root,*l1,*l2,*l1R1,*r1;
  root = createNode(5);
  r1 = createNode(6);
  l1 = createNode(3);
  l2 = createNode(1);
  l1R1 =createNode(4); 
  root->left = l1;
  root->right = r1;
  l1->left = l2;
  l1->right = l1R1;
  inOrderTraversal(root);
  int value = 5;
  delectionInBST(root,value);
  printf("\nNow the node  is = %d\n",root->Data);
  inOrderTraversal(root);
  return 0;
}
