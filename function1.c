#include <stdio.h>
int fibonacci(int i)
{
    if (i == 0)
    {
        return 0;
    }
    else if (i == 1)
    {
        return 1;
    }
    else
    {
        return ((i - 1) + (i - 2));
    }
}
void star(int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    int a, n, i, b;
    printf("Enter a number for fibonaci series\n");
    scanf("%d", &a);
    printf("Enter a number for star print\n");
    scanf("%d", &n);
    printf("Print the fibonacci series");
    for (i = 0; i <= a; i++)
    {
        b = fibonacci(i);
        printf(" %d ", b);
    }
    printf("print a star pattern \n");
    star(n);
}
