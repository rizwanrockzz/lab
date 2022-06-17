#include <bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node *left, *right;
};
 
node* newNode(int data)
{
    node* Node = new node();
    Node->data = data;
    Node->left = NULL;
    Node->right = NULL;
    return (Node);
}

int treePathsSumUtil(node *root, int val)
{
    if (root == NULL) return 0;
 
    val = (val*10 + root->data);
 
    if (root->left==NULL && root->right==NULL)
        return val;
 
    return treePathsSumUtil(root->left, val) + treePathsSumUtil(root->right, val);
}

int treePathsSum(node *root)
{
    return treePathsSumUtil(root, 0);
}

int main()
{
    node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    // root->left->left = newNode(2);
    // root->left->right = newNode(5);
    // root->right->right = newNode(4);
    // root->left->right->left = newNode(7);
    // root->left->right->right = newNode(4);
    cout<<"Sum of all paths is "<<treePathsSum(root);

    return 0;
}
