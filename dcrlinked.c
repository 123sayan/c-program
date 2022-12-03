#include <stdio.h>
#include <stdlib.h>
/*doubly circular linked list code */
typedef struct node
{
    int data;
    struct node *prev, *next;
} node;
node *head = NULL, *tail, *p, *temp;
void create();
void display();
void insert_at_first();
void insert_at_end();
void insert_at_pos();
void del_from_big();
void del_from_end();
void del_at_pos();
int getLength()
{

    int length = 0;
    temp = head;
    while (temp != NULL)
    {

        temp = temp->next;

        length++;
    }

    return length;
}
void main()
{
    int ch;
    while (1)
    {
        printf("enter 1->create\t2->insert at first\t3->insert at the end\t4->insert at any position\t5->delete from the first\t6->delete from the end\t7->delete from any position\t8->exit:\n");
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
            exit(0);
        }
    }
}

void create()
{
    char ch;
    do
    {
        p = (node *)malloc(sizeof(node));
        printf("Enter your data:\n");
        scanf("%d", &p->data);
        if (head == NULL)
        {
            head = tail = p;
            head->next = head;
            head->prev = head;
        }
        else
        {
            tail->next = p;
            p->prev = tail;
            p->next = head;
            head->prev = p;
            tail = p;
        }
        printf("Enter y to add new node:\n");
        fflush(stdin);
        scanf("%c", &ch);
    } while (ch == 'y' || ch == 'Y');
    printf("%d", tail->next->data);
    display();
}
void display()
{
    if (head == NULL)
    {
        printf("No list found\n");
    }
    else
    {
        temp = head;
        while (temp != tail)
        {
            printf("%d\t", temp->data);
            temp = temp->next;
        }
        // printf("%d", temp->data);
    }
}
void insert_at_first()
{
    p = (node *)malloc(sizeof(node));
    printf("Enter data to  the node:\n");
    scanf("%d", &p->data);
    if (head == NULL)
    {
        head = tail = p;
        p->prev = tail;
        p->next = head;
    }
    else
    {
        p->next = head;
        head->prev = p;
        p->prev = tail;
        tail->next = p;
        head = p;
    }
    display();
}
void insert_at_end()
{
    p = (node *)malloc(sizeof(node));
    printf("Enter a number to the node:\n");
    scanf("%d", &p->data);
    if (head == tail)
    {
        head = tail = p;
        p->prev = tail;
        p->next = head;
    }
    else
    {
        p->prev = tail;
        tail->next = p;
        p->next = head;
        head->prev = p;
        tail = p;
    }
    display();
}
void insert_at_pos()
{
    int pos, i = 1, len;
    temp = head;
    printf("Enter the position you want to enter a new node:\n");
    scanf("%d", &pos);
    len = getLength;
    if (pos < 1 || pos > len)
    {
        printf("Invalid position\n");
    }
    if (pos == 1)
    {

        insert_at_first();
    }
    else
    {
        p = (node *)malloc(sizeof(node));
        printf("Enter a number to the node:\n");
        scanf("%d", &p->data);
        while (i < pos - 1)
        {
            temp = temp->next;
            i++;
        }
        p->prev = temp;
        p->next = temp->next;
        temp->next->prev = p;
        temp->next = p;
    }
    display();
}
void del_from_big()
{
    temp = head;
    if (head == NULL)
    {
        printf("The list is empty\n");
    }
    else if (head->next == head)
    {
        head = tail = NULL;
        free(temp);
    }
    else
    {
        head = head->next;
        head->prev = tail;
        tail->next = head;
        free(temp);
    }
    display();
}
void del_from_end()
{
    temp = tail;
    if (head == NULL)
    {
        printf("The list is empty\n");
    }
    else if (head->next = head)
    {
        head = tail = NULL;
        free(tail);
    }
    else
    {
        tail = tail->prev;
        tail->next = head;
        head->prev = tail;
        free(temp);
    }
    display();
}
void del_at_pos()
{
    int pos, i, len;
    temp = head;
    printf("Enter the position you want to insert the node:\n");
    scanf("%d", &pos);
    len = getLength();
    if (pos < 1 || pos > len)
    {
        printf("Invlid position\n");
    }
    else if (pos == 1)
    {
        del_from_big();
    }
    else
    {
        while (i < pos)
        {
            temp = temp->next;
            i++;
        }
        temp->prev = temp->next;
        temp->next = temp->prev;
        if (temp->next = head)
        {
            tail = temp->prev;
            free(temp);
        }
        free(temp);
    }
    display();
}