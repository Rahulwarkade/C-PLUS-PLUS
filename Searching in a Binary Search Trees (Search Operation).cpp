#include <stdio.h>
#include<stdlib.h>
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
struct node* searchIng(struct node *root,int key)
{
  if(root==NULL)
  {
    return NULL;
  }
  else if(root->Data==key)
  {
    return root;
  }
  else if(root->Data<key)
  {
    return searchIng(root->left, key);
  }
  else
  {
    return searchIng(root->right, key);
  }
  return NULL;
}
int main(void) 
{ 
  struct node *root,*l1,*l2,*l1R1,*r1;
  root = createNode(5);
  l1 = createNode(3);
  l2 = createNode(5);
  l1R1 = createNode(4);
  r1 = createNode(6);
  root->left = l1;
  root->right = r1;
  l1->left = l2;
  l1->right = l1R1;
  int key = 5;
  struct node *keyNode = searchIng(root,key);
  if(keyNode!=NULL)
  {
    printf("The key is found in BST  = %d \n",keyNode->Data);
  }
  else
  {
    printf("The key is not found in the BST \n");
  }
  return 0;
}
