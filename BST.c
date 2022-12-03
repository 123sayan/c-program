#include <stdio.h>
#include <stdlib.h>
/*this is the code for binery search tree.....*/
typedef struct BST
{
    int data;
    struct BST *left, *right;
} bst;
bst *new (int item)
{
    bst *temp = (bst *)malloc(sizeof(bst));
    temp->data = item;
    temp->left = temp->right = NULL;
    return temp;
}
void inorder(bst *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d\n", root->data);
        inorder(root->right);
    }
}
bst *insert(bst *root, int data)
{
    if (root == NULL)
        return new (data);
    if (data < root->data)
        root->left = insert(root->left, data);
    else if (data > root->data)
        root->right = insert(root->right, data);
    return root;
}
int main()
{
    bst *root = NULL;
    root = insert(root, 50);
    insert(root, 60);
    insert(root, 70);
    insert(root, 80);
    insert(root, 90);
    insert(root, 40);
    insert(root, 30);
    insert(root, 10);
    insert(root, 20);
    inorder(root);
}