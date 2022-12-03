#include <stdio.h>
#include <stdlib.h>
typedef struct linkedlist
{
    int data;
    struct node *next;
} node;
node *head = NULL, *p, *temp;

void create();
void display();
void insert_in_front();
void insert_in_end();
void insert_at_a_position();
void rev();
void delete_from_first();
void delete_at_end();
void delete_at_pos();
void main()
{
    int ch;

    while (1)
    {
        printf("Enter 1->add\t2->insert at front\t3->insert at end\t4->insert at any position\t5->reverse\t6->delete form the first\t7->delete form the end\t8->delete form any position\t9->exit\n");
        printf("Enter your choice\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            create();
            break;
        case 2:
            insert_in_front();
            break;
        case 3:
            insert_in_end();
            break;
        case 4:
            insert_at_a_position();
            break;
        case 5:
            rev();
            break;
        case 6:
            delete_from_first();
            break;
        case 7:
            delete_at_end();
            break;
        case 8:
            delete_at_pos();
            break;
        case 9:
            exit(0);
        }
    }
}

void create()
{
    char a;
    int x;
    do
    {
        p = (node *)malloc(sizeof(node));
        printf("Enter value\n");
        scanf("%d", &x);
        p->data = x;
        p->next = NULL;
        if (head == NULL)
        {
            head = p;
            temp = p;
        }
        else
        {
            temp->next = p;
            temp = p;
        }

        printf("Enter y to add more node\n");
        fflush(stdin);
        scanf("%c", &a);
    } while (a == 'y' || a == 'Y');
    display();
}

void display()
{
    int c = 0;

    temp = head;
    while (temp != NULL)
    {
        printf("The value input is %d and the address is %x and the number of  node is %d\n", temp->data, temp, c);
        temp = temp->next;
        c = c + 1;
    }
    printf("The  number of nodes are %d\n", c);
}

void insert_in_front()
{
    p = (node *)malloc(sizeof(node));
    printf("Enter a number to insert at the front\n");
    scanf("%d", &p->data);
    p->next = head;
    head = p;
    display();
}

void insert_in_end()
{

    p = (node *)malloc(sizeof(node));
    printf("Enter a nummber to insert at the end\n");
    scanf("%d", &p->data);
    temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = p;
    display();
}

void insert_at_a_position()
{
    int c, pos, i = 0;
    p = (node *)malloc(sizeof(node));
    printf("Enter the position you want to insert\n");
    scanf("%d", &pos);
    while (temp != NULL)
    {
        temp = temp->next;
        c = c + 1;
    }
    if (pos > c)
    {
        printf("Invalid choice");
    }
    else
    {
        temp = head;
        while (i < pos)
        {
            temp = temp->next;
            i++;
        }
    }
    printf("Enter a nummber to enter \n");
    scanf("%d", &p->data);
    p->next = temp->next;
    temp->next = p;
    display();
}

void rev()
{
    node *prevnode, *currentnode, *nextnode;
    prevnode = 0;
    currentnode = nextnode = head;
    while (nextnode != NULL)
    {
        nextnode = nextnode->next;
        currentnode->next = prevnode;
        prevnode = currentnode;
        currentnode = nextnode;
    }
    head = prevnode;
    display();
}

void delete_from_first()
{
    if (head == NULL)
    {
        printf("The list is empty\n");
    }
    else
    {
        temp = head;
        head = head->next;
        free(temp);
        display();
    }
}

void delete_at_end()
{
    node *prev;
    temp = head;
    while (temp->next != NULL)
    {
        prev = temp;
        temp = temp->next;
    }
    if (temp == head)
    {
        head = NULL;
    }
    else
    {
        prev->next = NULL;
    }
    free(temp);
    display();
}

void delete_at_pos()
{
    node *nextnode;
    int pos, i = 1;
    printf("Enter the position which you want to delete\n");
    scanf("%d", &pos);
    temp = head;
    while (i < pos - 1)
    {
        temp = temp->next;
        i++;
    }
    nextnode = temp->next;
    temp = nextnode->next;
    free(nextnode);
    display();
}
