#include <stdio.h>
#include <stdio.h>
#define n 5
int arr[n], front = -1, rear = -1;
void push(int x);
void pop();
void display();
void menu()
{
    printf("\t\t\tProgram on circular queue\n");
    printf("\t\t\t1-Push\n");
    printf("\t\t\t2-Pop\n");
    printf("\t\t\t3-Exit\n");
    printf("\t\t\tenter your choice\n");
}
int main()
{
    int ch, m;
    while (1)
    {
        menu();
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            if (rear != n - 1)
            {
                printf("\nEnter the number to push ");
                scanf("%d", &m);
            }
            Push(m);
            break;
        case 2:
            Pop();
            break;
        case 3:
            exit(0);
        default:
            printf("\nInvalid choice \n");
            break;
        }
    }
    return 0;
}
void push(int x)
{
    if (front == -1 && rear == -1)
    {
        front = rear = 0;
        arr[rear] = x;
    }
    else if ((rear + 1) % n == front)
    {
        printf("overflow\n");
    }
    else
    {
        rear = (rear + 1) % n;
        arr[rear] = x;
    }
    display();
}
void pop()
{
    if (front == -1 && rear == -1)
    {
        printf("Underflow\n");
    }
    else if (front == rear)
    {
        printf("The poped element is %d", arr[front]);
        front = rear = -1;
    }
    else
    {
        printf("The poped element is %d", arr[front]);
        front = (front + 1) % n;
    }
    display();
}
void display()
{
    int i;
    if (front == -1 && rear == -1)
    {
        printf("The queue is empty\n");
    }
    else
    {
        printf("The queue is:\n");
        while (i != rear)
        {
            printf("%d", arr[i]);
            i = (i + 1) % n;
        }
        printf("%d", arr[rear]);
    }
}