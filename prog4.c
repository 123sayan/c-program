#include <stdio.h>
int main()
{
    int i, spc, j, a;
    printf("Enter the number of rows\n");
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        for (j = 1; j <= 2 * a - 1; j++)
        {
            if (j >= i && j <= 2 * a - i)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    for (i = 1; i <= a; ++i)
    {
        for (spc = 1; spc <= a - i; ++spc)
        {
            printf("  ");
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}