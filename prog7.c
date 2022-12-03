#include <stdio.h>
int main()
{

    int i, j, a, k;
    printf("Enter a number of rows\n");
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        for (k = 1; k <= a; k++)
        {
            if(i==a||k==a||i+k==a+1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}
