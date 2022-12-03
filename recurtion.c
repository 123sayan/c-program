#include <stdio.h>
void fun(int a)
{
    if (a > 0)
    {
        fun(a - 1);
        printf("%d\n", a);
    }
}
void main()
{
    int x = 4;
    fun(x);
}