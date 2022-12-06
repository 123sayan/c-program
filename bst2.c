#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *left, *right;
} node;
node *create()
{
    int x;
    node *p = (node *)malloc(sizeof(node));
    printf("Enter new value to the tree:\n");
    scanf("%d", &x);
    p->data = x;
    if (x == -1)
    {
        return 0;
    }
    printf("Enter the left child of %d", x);
    p->left = create();
    printf("Enter right child of %d", x);
    p->right = create();
    return p;
}
void main()
{
    node *root;
    root = create();
}
