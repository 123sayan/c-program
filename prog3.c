#include<stdio.h>
int main()
{
    int a;
    printf("Enter any number:");
    scanf("%d",&a);
    if(a%2==0)
        printf(" The number is even ",a);
    else
        printf(" The number is odd",a);
    return 0;
}
