#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
typedef struct linked
{
    int data;
    struct linked *next;
} list;
list *head = NULL, *p;
void Add();
void Display();
void main()
{
    Add();
}
void Add()
{
    list *t;
    int op = 1;
    while (op == 1)
    {
        p = (list *)malloc(sizeof(list));
        printf("\nEnter the data ");
        scanf("%d", &p->data);
        p->next = NULL;
        if (head == NULL)
        {
            head = p;
            t = p;
        }
        else
        {
            t->next = p;
            t = p;
        }
        printf("\nEnter 1 to enter more no of nodes");
        scanf("%d", &op);
    }
    Display();
}
void Display()
{
    int c = 0;
    list *i;
    i = head;
    while (i != NULL)
    {
        printf("\n %d is add %x is the address\t %d is the node number", i->data, i, c);
        i = i->next;
        c = c + 1;
    }
    printf("\n %d is the total number of node present in the linked list\n", c);
}