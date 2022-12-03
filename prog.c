#include<stdio.h>
void main()
{
    int n,i,j;
    
    printf(" How meny raws do you want to enter?");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {
        for(j=1;j<=n;j++)
        if (i==1||j==1||i==n||j==n||i+j==n+1||i==j)
            printf("%2c",'*');
        else
            printf("  ");

        printf("\n");
    }
}
