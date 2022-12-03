#include <stdio.h>
#include <stdlib.h>
/*single circular linked list code */
typedef struct node
{
    int data;
    struct node *next;
} node;
node *p, *temp, *tail;
int getlen()
{
    int c = 0;
    temp = tail->next;
    while (temp != tail->next)
    {
        temp = temp->next;
        c = c + 1;
    }
    return c;
}
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
        printf("enter 1->create\t2->insert at the first\t3->insert at the end\t4->insert at a given position\t5->delete from the bigining\t6->delete from the end\t7->delete from any position\t8->reverse\t9->exit:\n");
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
        printf("Enter a number:");
        scanf("%d", &p->data);
        p->next = NULL;
        if (tail == NULL)
        {
            tail = p;
            tail->next = p;
        }
        else
        {
            p->next = tail->next;
            tail->next = p;
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
    if (tail == NULL)
    {
        printf("list is empty:\n");
    }
    else
    {
        temp = tail->next;
        while (temp->next != tail->next)
        {
            printf("%d\t", temp->data);
            temp = temp->next;
        }
        printf("%d\t", temp->data);
    }
}
void insert_at_first()
{
    p = (node *)malloc(sizeof(node));
    printf("Enter a number :\n");
    scanf("%d", &p->data);
    p->next = NULL;
    if (tail == NULL)
    {
        tail = p;
        tail->next = p;
    }
    else
    {
        p->next = tail->next;
        tail->next = p;
    }
    display();
}
void insert_at_end()
{
    p = (node *)malloc(sizeof(node));
    printf("Enter a number to store:\n");
    scanf("%d", &p->data);
    p->next = NULL;
    if (tail == NULL)
    {
        tail = p;
        tail->next = p;
    }
    else
    {
        p->next = tail->next;
        tail->next = p;
        tail = p;
    }
    display();
}
void insert_at_pos()
{
    int pos, l, i;
    printf("Enter the position you want to enter the elememt:\n");
    scanf("%d", &pos);
    l = getlen();
    if (pos < 1 && pos > l)
    {
        printf("Invilid position:\n");
    }
    else if (pos == 1)
    {
        insert_at_first();
    }
    else
    {
        p = (node *)malloc(sizeof(node));
        printf("Enter a number:\n");
        scanf("%d", p->data);
        p->next = NULL;
        temp = tail->next;
        while (i < pos - 1)
        {
            temp = temp->next;
            i++;
        }
        p->next = temp->next;
        temp->next = p;
    }
    display();
}
void del_from_big()
{
    temp = tail->next;
    if (tail == NULL)
    {
        printf("No element is present\n");
    }
    else if (temp->next = temp)
    {
        tail = 0;
        free(temp);
    }
    else
    {
        tail->next = temp->next;
        free(temp);
    }
    display();
}
void del_from_end()
{
    node *temp1;
    temp = tail->next;
    if (tail == NULL)
    {
        printf("The list is empty\n");
    }
    else if (temp->next = temp)
    {
        tail = 0;
        free(temp);
    }
    else
    {
        while (temp->next != tail->next)
        {
            temp1 = temp;
            temp = temp->next;
        }
        temp1 = tail->next;
        tail = temp1;
        free(temp);
    }
    display();
}
void del_at_pos()
{
    node *current, *nextnode;
    int pos, l, i;
    printf("Enter the position:\n");
    scanf("%d", &pos);
    current = tail->next;
    l = getlen();
    if (pos < 1 || pos > l)
    {
        printf("Invalid\n");
    }
    else if (pos == 1)
    {
        del_from_big();
    }
    else
    {
        while (i < pos - 1)
        {
            current = current->next;
            i++;
        }
        nextnode = current->next;
        current->next = nextnode->next;
        free(nextnode);
    }
}
void reverse()
{
    node *prev, *current, *nextnode;
    current = tail->next;
    nextnode = current->next;
    if (tail == NULL)
    {
        printf("The linked list is empty\n");
    }
    else
    {
        while (current != tail)
        {
            prev = current;
            current = nextnode;
            nextnode = current->next;
            current->next = prev;
        }
        nextnode->next = tail;
        tail = nextnode;
    }
    display();
}