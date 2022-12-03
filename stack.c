#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int a[5], top = -1;
void Push(int x);
void Pop();
void Display();
void menu()
{
    printf("\t\t\tProgram on stack\n");
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
            if (top != MAX - 1)
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
void Push(int x)
{
    if (top >= MAX - 1)
    {
        printf("Your stack is full\n");
    }
    top++;
    a[top] = x;
    Display();
}
void Pop()
{
    if (top == -1)
    {
        printf("The stack is empty\n");
    }
    printf("%d is the elememt poped form the stack\n", a[top]);
    top--;
    Display();
}
void Display()
{
    if (top == -1)
    {
        printf("The stack is empty\n");
    }
    printf("the number inserted  is\n");
    for (int i = 0; i <= top; i++)
    {
        printf("%d ", a[i]);
    }
}