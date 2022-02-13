// HOME ASSIGNMENT 3

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node
{
    int data;
    struct node *left, *right;
};

struct node *newNode(int val)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

bool isMirror(struct node* root1, struct node* root2)
{
    if (root1 == NULL && root2 == NULL)
        return true;

    if (root1 && root2 && root1->data == root2->data)
        return isMirror(root1->left, root2->right) && isMirror(root1->right, root2->left);
 
    return false;
}

bool isSymmetric(struct node* root)
{
    return isMirror(root, root);
}

int main()
{
    struct node *root;
    
    root = (struct node *)malloc(sizeof(struct node));

    root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(2);
    root->left->left = newNode(3);
    root->left->right = newNode(4);
    root->right->left = newNode(4);
    root->right->right = newNode(3);
 

    if(isSymmetric(root))
      printf("Symmetric");
    else
      printf("Not Symmetric");

    return 0;
}
