// HOME ASSIGNMENT 3

/*

12	Check if a binary tree is symmetric or not
Given a binary tree, write an efficient algorithm to check if it has a symmetric structure or not, i.e., left and right subtree mirror each other.
For example, the following are some binary trees that have a symmetric structure:
 
 
The tree has a symmetric structure if the left and right subtree mirror each other. Two trees mirror each other if all the following conditions are satisfied:
•	Both trees are empty, or both are non-empty.
•	The left subtree is the mirror of the right subtree.
•	The right subtree is the mirror of the left subtree.

*/

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





// HOME ASSIGNMENT 4

/*

Sort the following elements using Heap Sort
[34, 12, 38, 41, 93, 96, 88, 47, 4, 51, 7, 7, 92, 61, 66]

*/

// Program:
// Heap Sort in C
  
#include <stdio.h>
  
// Function to swap the the position of two elements

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
  
void heapify(int arr[], int n, int i)
{
    // Find largest among root, left child and right child
    
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
  
    if (left < n && arr[left] > arr[largest])
    {
      largest = left;
    }
  
    if (right < n && arr[right] > arr[largest])
    {
      largest = right;
    }
  
    // Swap and continue heapifying if root is not largest
    if (largest != i)
    {
      swap(&arr[i], &arr[largest]);
      heapify(arr, n, largest);
    }
}
  
// Main function to do heap sort
void heapSort(int arr[], int n)
{
    // Build max heap
    for (int i = n / 2 - 1; i >= 0; i--)
    {
      heapify(arr, n, i);
    }
  
    // Heap sort
    for (int i = n - 1; i >= 0; i--)
    {
      swap(&arr[0], &arr[i]);
      // Heapify root element to get highest element at root again
      heapify(arr, i, 0);
    }
}
  
// Print an array
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
    {
      printf("%d ", arr[i]);
    }
    printf("\n");
}
  
// Driver code
int main()
{
    int arr[] = {34, 12, 38, 41, 93, 96, 88, 47, 4, 51, 7, 7, 92, 61, 66};
    int n = sizeof(arr) / sizeof(arr[0]);
  
    heapSort(arr, n);
  
    printf("Sorted array is \n");
    printArray(arr, n);
}

/*

OUTPUT:

Sorted array is
4 7 7 12 34 38 41 47 51 61 66 88 92 93 96 

*/
