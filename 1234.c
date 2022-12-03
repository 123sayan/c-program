#include <stdio.h>
int main()
{
    int n, i, j, k, z;
    printf("Enter numeber of rows\n");
    scanf("%d", &n);
    z = n;
    for (i = 0; i < n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= (n - i); k++)
        {
            printf("%d", k);
        }

        printf("\n");
    }
}