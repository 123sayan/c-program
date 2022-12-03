#include <stdio.h>
int main()
{
    int a, i, j, k;
    printf("Enter the number of raws\n");
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        for (j = 1; j <= a - i; j++)
        {
            printf("  ");
        }
        for (k = 1; k <= 2 * i - 1; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (i = 1; i <= a; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("  ");
        }
        for (k = 1; k <= 2 * (a - i) - 1; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
