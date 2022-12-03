#include <stdio.h>
#include <conio.h>
int a[] = {10, 20, 30, 40, 50, 60, 70, 80};
void binary(int, int, int, int);
void main()
{
    int l = 0, r = 7, x, fl = -1;
    printf("Enter the number you want to search");
    scanf("%d", &x);
    binary(l, r, x, fl);
}
void binary(int l, int r, int x, int fl)
{
    int ll = l, lr = r, m, count = 0;
    m = (ll + lr) / 2;
    while (x != a[m] && ll < lr)
    {
        if (x < a[m])
        {
            lr = m - 1;
        }
        else
        {
            ll = m + 1;
            m = (ll + lr) / 2;
            count++;
        }
    }
    if (x == a[m])
    {
        fl = m;
        printf("%d is the position of the number is", fl);
    }
    else
    {
        printf("\nThe number not found\n");
    }
    printf("\nthe number of comparision done is %d", count);
}