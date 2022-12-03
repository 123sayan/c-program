#include <stdio.h>
int check(int, int);
int main()
{
    int s, a, b;
    printf("Enter two number to check\n");
    scanf("%d%d", &a, &b);
    s = check(a, b);
    printf("the maximum is %d", s);
    return 0;
}
int check(int x, int y)
{
    if (x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}