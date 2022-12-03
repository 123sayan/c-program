#include<stdio.h>
#include<conio.h>
/*This is the code for circular queue using linked list*/
typedef struct crqueue
{
    int data;
    struct crqueue *next;
} node;