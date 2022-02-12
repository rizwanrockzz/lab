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







// Task-2

/*
AVL tree is a descendant of Binary Search Tree but overcomes its drawback of increasing complexity if
the elements are sorted. It monitors the balance factor of the tree to be 0 or 1 or -1. In case it tree
becomes unbalanced corresponding rotation techniques are performed to balance the tree. Implement
insert operation for the creation of nodes in AVL tree. Check the balance factor. If not satisfied apply
rotations.
1. Left Rotation: If the addition of a node to the tree’s right makes it imbalance then, in that case, Left
Rotation needs to be performed.
2. Right Rotation: If the addition of a node to the left of the tree makes the node imbalance then Right
Rotation needs to be performed. In other words, When the number of nodes increases on the left side,
then there emerges a need to shift the elements to the right side to balance it thus it is said to be Right
Rotation.
3. Left-Right Rotation: This type of rotation is a combination of the above 2 rotations explained. This
type of rotation occurs when one element is added to the right subtree of a left tree.
In such a case first, perform left rotation on the subtree followed by a right rotation of the left tree.
4. Right-Left Rotation: This type of rotation is also composed of a sequence of above 2 rotations. This
type of rotation is needed when an element is added to the left of the right subtree, and the tree
becomes imbalanced. In such a case, we first perform right rotation on the right subtree and then left
rotation on the right tree.
*/

#include <stdio.h>
#include <stdlib.h>
// AVL Tree ( Adelson-Velskii and Landis )


struct Node
{
    int key;
    struct Node *left;
    struct Node *right;
    int height;
};

int getHeight(struct Node *n)
{
    if (n == NULL)
    {
        return 0;
    }

    return n->height;
}

struct Node *createNode(int key)
{
    struct Node *new = (struct Node *)malloc(sizeof(struct Node));
    new->key = key;
    new->left = NULL;
    new->right = NULL;
    new->height = 1;
    return new;
}

int max(int a, int b)
{
    return (a > b) ? a : b;
}

int getBalanceFactor(struct Node *n)
{
    if (n == NULL)
    {
        return 0;
    }
    return getHeight(n->left) - getHeight(n->right);
}

struct Node *rightRotate(struct Node *y)
{
    struct Node *x = y->left;
    struct Node *T2 = x->right;

    x->right = y;
    y->left = T2;

    x->height = max(getHeight(x->right), getHeight(x->left)) + 1;
    y->height = max(getHeight(y->right), getHeight(y->left)) + 1;

    return x;
}

struct Node *leftRotate(struct Node *x)
{
    struct Node *y = x->right;
    struct Node *T2 = y->left;

    y->left = x;
    x->right = T2;

    x->height = max(getHeight(x->right), getHeight(x->left)) + 1;
    y->height = max(getHeight(y->right), getHeight(y->left)) + 1;

    return y;
}

struct Node *insert(struct Node *node, int key)
{
    if (node == NULL)
        return createNode(key);

    if (key < node->key)
        node->left = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);

    node->height = 1 + max(getHeight(node->left), getHeight(node->right));
    int bf = getBalanceFactor(node);

    // Left Left Case
    if (bf > 1 && key < node->left->key)
    {
        return rightRotate(node);
    }
    // Right Right Case
    if (bf < -1 && key > node->right->key)
    {
        return leftRotate(node);
    }
    // Left Right Case
    if (bf > 1 && key > node->left->key)
    {
        node->left = leftRotate(node->left);
        return rightRotate(node);
    }
    // Right Left Case
    if (bf < -1 && key < node->right->key)
    {
        node->right = rightRotate(node->right);
        return leftRotate(node);
    }
    return node;
}

void inorder(struct Node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->key);
        inorder(root->left);
        inorder(root->right);
    }
}

int main()
{
    struct Node *root = NULL;

    root = insert(root, 1);
    root = insert(root, 2);
    root = insert(root, 4);
    root = insert(root, 5);
    root = insert(root, 6);
    root = insert(root, 3);
    
    printf("Inorder od AVL Tree\n\n");
    inorder(root);
    return 0;
} 

