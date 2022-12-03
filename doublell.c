#include <stdio.h>
#include <stdlib.h>
/*Double linked list code*/
typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
} node;
node *head = NULL, *p, *temp, *tail;

void create();
void display();
void insert_at_first();
void insert_at_end();
void insert_at_pos();
void del_from_big();
void del_from_end();
void del_at_pos();
void reverse();
void main()
{
    int ch;
    while (1)
    {
        printf("enter 1->create\t2->insert at the first\t3->insert at the end\t4->insert at a given position\t5->delete form the bigining\t6->delete from the end\t7->delete from any position\t8->reverse\t9->exit:\n");
        printf("Enter your choice:\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            create();
            break;
        case 2:
            insert_at_first();
            break;
        case 3:
            insert_at_end();
            break;
        case 4:
            insert_at_pos();
            break;
        case 5:
            del_from_big();
            break;
        case 6:
            del_from_end();
            break;
        case 7:
            del_at_pos();
            break;
        case 8:
            reverse();
            break;
        case 9:
            exit(0);
        }
    }
}

void create()
{
    char a;
    do
    {
        p = (node *)malloc(sizeof(node));
        printf("Enter data");
        scanf("%d", &p->data);
        p->next = NULL;
        p->prev = NULL;
        if (head == NULL)
        {
            head = p;
            tail = p;
        }
        else
        {
            tail->next = p;
            p->prev = tail;
            tail = p;
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

void insert_at_first()
{
    p = (node *)malloc(sizeof(node));
    printf("Enter the new data\n:");
    scanf("%d", &p->data);
    p->prev = NULL;
    p->next = head;
    head->prev = p;
    head = p;
    display();
}

void insert_at_end()
{
    p = (node *)malloc(sizeof(node));
    printf("Enter the new data\n:");
    scanf("%d", &p->data);
    p->next = NULL;
    tail->next = p;
    p->prev = tail;
    tail = p;
    display();
}

void insert_at_pos()
{
    int pos, i;
    printf("Enter a position you want to enter a node:\n");
    scanf("%d", &pos);
    temp = head;
    p = (node *)malloc(sizeof(node));
    printf("enter the value:\n");
    scanf("%d", &p->data);
    while (i < pos - 1)
    {
        temp = temp->next;
        i++;
    }
    p->prev = temp;
    p->next = temp->next;
    temp->next = p;
    p->next->prev = p;
    display();
}

void del_from_big()
{
    if (head == NULL)
    {
        printf("no elememt is there\n");
    }
    else
    {
        temp = head;
        head = head->next;
        head->prev = NULL;
        free(temp);
    }
    display();
}

void del_from_end()
{
    if (tail == NULL)
    {
        printf("No element\n");
    }
    else
    {
        temp = tail;
        tail = tail->prev;
        tail->next = NULL;
        free(temp);
    }
    display();
}

void del_at_pos()
{
    int pos, i = 1;
    printf("Enter the position\n");
    scanf("%d", &pos);
    temp = head;
    while (i < pos)
    {
        temp = temp->next;
        i++;
    }
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    free(temp);
    display();
}

void reverse()
{
    node *current, *nextnode;
    current = nextnode = head;
    while (nextnode != NULL)
    {
        nextnode = nextnode->next;
        current->next = current->prev;
        current->prev = nextnode;
        current = nextnode;
    }
    current = head;
    head = tail;
    tail = current;
    display();
}