#include <stdio.h>
#include <process.h>
/*This is the code for quicksort...*/
void quick(int *, int, int);
int main()
{
    int i, n;
    printf("how many numbers do you want to enter:");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d numbers", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    quick(a, 0, n);
    printf("The numbers in accerding order are:\n");
    for (i = 0; i < n; i++)
        printf("%d\t", a[i]);
    return 0;
}
void quick(int a[], int low, int upper)
{
    int l, r, p, t;
    l = low;
    r = upper;
    p = low;
    if (low > upper)
        return;
    while (1)
    {
        while (a[r] > a[p] && p != r)
            r--;
        if (p == r)
            break;
        if (a[r] < a[p])
        {
            t = a[p];
            a[p] = a[r];
            a[r] = t;
            p = r;
        }
        while (a[l] <= a[p] && l != p)
            l++;
        if (p == l)
            break;
        if (a[l] > a[p])
        {
            t = a[p];
            a[p] = a[l];
            a[l] = t;
            p = l;
        }
    }
    quick(a, low, p - 1);
    quick(a, p + 1, upper);
}