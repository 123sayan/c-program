#include<stdio.h>
int fect(int);
int main()
{
    int a,b;
    printf("Enter a number you want the factorial of \n");
    scanf("%d",&a);
    b=(fect (a));
    printf("The fectorial of the number is %d\n",b);
}
int fect(int n)
{
    if (n==0||  n==1) 
    {
        return 1;
    }
    else
    {
        return (n*fect(n-1));
    }
}