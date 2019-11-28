#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node* left;
  struct node* right;
};


struct node* createNewNode(int value)
{

struct node *newNode = malloc(sizeof(struct node));
newNode->data = value;
newNode->left = NULL;
newNode->right = NULL;

return newNode;
}


void insertLeft(struct node* parent, int value)
{
parent->left = createNewNode(value);
}


void insertRight(struct node* parent, int value)
{
parent->right= createNewNode(value);	
}


void printNode(struct node* root)
{
printf("root value %d\n",root->data);
printf("left chield value %d\n",root->left->data);
printf("right child value %d\n",root->right->data);
printf("\n");
}


int main (void)
{

struct node* root = createNewNode(5);

insertLeft(root,8);
insertRight(root,3);
printNode(root);

return 0;
}