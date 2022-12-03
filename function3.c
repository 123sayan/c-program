#include<stdio.h>
float square(float);
int main()
{
    float a,b;
    printf("Enter a number you want the square of \n");
    scanf("%f",&a);
    b=square(a);
    printf("The square of the number is %f",b);
    return 0;
}
float square(float a)
{
    float squ;
    squ=a*a;
    return squ;
}