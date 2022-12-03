#include <stdio.h>
int main()
{
    int n, i, j, k, z;
    printf("Enter numeber of rows\n");
    scanf("%d", &n);
    z = n;
    int x = n;
    for (i = 1; i <= n; i++)
    {
        if (i > 1)
        {
            for (k = 1; k < i; k++)
            {
                printf(" ");
            }
        }
        for (j = 1; j <= x; j++)
        {
            printf("%d", j);
        }

        x--;
        printf("\n");
    }
}
