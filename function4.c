#include<stdio.h>
int prime(int);
int armstrong(int);
int main()
{
    char c;
    int a,temp ;
    printf("Enter a number to check\n");
    scanf("%d",&a);
    printf("Enter p to check prime and a to check armstrong \n");
    printf("Enter your choise \n");
    scanf("%d",&c);
    if (c=='p'||c=='P') 7
    {
        temp=prime(a);
        if (temp==1)
        {
            printf("%d is a prime number \n",a);
        }
        else
        {
            printf("%d is not prime number \n",a);
        }
    }
    if (c=='a'||c=='A')
    {
        temp=armstrong(a);
        if (temp==1)
        {
            printf("%d is an armstrong number \n",a);
        }
        else
        {
            printf("%d is not an armstrong  number \n",a);
        }
    }
    
}
int prime(int a)
{
    int i,flag=1;
    for ( i = 2; i <=a/2; i++)
    {
        if (a%2==0)
        {
            flag=0;
            break;
        }
    }
    return flag;
}
int armstrong(int a)
{
    int  n=0,temp,flag=0;
    temp=a;
    while (n!=0)
    {
        n=n+(a%10)*(a%10)*(a%10);
        a=a/10;
    }
    if (n==temp)
    {
        flag=1;
    }
    return flag;
}