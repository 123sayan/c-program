#include <stdio.h>
int findmax(int[]);
int n;
int main()
{
    int arr[10], temp, i;
    printf("Enter the number of number you want the number of number in the array\n");
    scanf("&d", &n);
    printf("Input %d element  in the array\n", n);
    for (i = 1; i <= n; i++)
    {
        printf("Element - %d", i);
        scanf("%d", &arr[i]);
    }
    temp = findmax(arr);
    printf("The largest element is %d\n\n", temp);
    return 0;
}
int findmax(int arr[])
{
    int i, max = arr[0];
    while (i < n)
    {
        if (max < arr[i])
            max = arr[i];
        i++;
    }
    return max;
}