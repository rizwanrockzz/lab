// Task-1

/*
Design, develop and execute a program in C/Python to implement Binary Search tree where each node 
consist of integers. The program should support following functions and show different testcases.
a. Create a Binary Search tree
b. Insert a new node 
c. Delete a node if it is found, otherwise display appropriate message 
d. Display the nodes of Binary Search tree
e Validate Binary Search tree
*/

#include <stdio.h>
#include <stdlib.h>

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

struct node *insert(struct node *node, int data)
{
    // only executes first time
    if (node == NULL)
    {
        return newNode(data);
    }

    if (data < node->data)
    {
        node->left = insert(node->left, data);
    }
    else if (data > node->data)
    {
        node->right = insert(node->right, data);
    }

    return node;
}

void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d \n", root->data);
        inorder(root->right);
    }
}

//  deletion

struct node *minValueNode(struct node *node)
{
    struct node *current = node;

    while (current && current->left != NULL)
    {
        current = current->left;
    }

    return current;
}

struct node *deleteNode(struct node *root, int data)
{
    if (root == NULL)
        return root;

    if (data < root->data)
        root->left = deleteNode(root->left, data);

    else if (data > root->data)
        root->right = deleteNode(root->right, data);

    else
    {
        if (root->left == NULL)
        {
            struct node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            struct node *temp = root->left;
            free(root);
            return temp;
        }

        struct node *temp = minValueNode(root->right);

        root->data = temp->data;

        root->right = deleteNode(root->right, temp->data);
    }

    printf("root pointer at last is : %p\n",root);
    return root;
}

int main()
{
    /*
              50
            /    \
          30      70
         /  \    /  \
       20   40  60   80 
    */
    struct node *root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    printf("Inorder traversal of the given tree \n");
    inorder(root);

    printf("\nDelete 20\n");
    root = deleteNode(root, 20);
    printf("Inorder traversal of the modified tree \n");
    inorder(root);

    printf("\nDelete 30\n");
    root = deleteNode(root, 30);
    printf("Inorder traversal of the modified tree \n");
    inorder(root);

    printf("\nDelete 50\n");
    root = deleteNode(root, 50);
    printf("Inorder traversal of the modified tree \n");
    inorder(root);

    return 0;
}
