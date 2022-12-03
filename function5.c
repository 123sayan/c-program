#include <stdio.h>
#include <math.h>
int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int fibbonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return (fibbonacci)(n - 1) + fibbonacci(n - 2);
    }
}
int main()
{
    int ch, a, i, n;
    printf("Enter your choice \n");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        printf("Enter a number you want the fectorial of \n");
        scanf("%d", &n);
        a = factorial(n);
        printf("The factorial of the given number is %d\n", a);
        break;

    case 2:
        printf("Enter the number upto which u want the series to go on \n");
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            printf("%d ", fibbonacci(i));
        }
        break;

    default:
        printf("There is no other option \n");
        break;
    }
}